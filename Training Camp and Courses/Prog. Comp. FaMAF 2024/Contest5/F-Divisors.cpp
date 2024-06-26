#include<bits/stdc++.h>
using namespace std;
#define fore(i,a,b) for(ll i=(a);i<=(b);i++)
#define rof(i, a, b) for(int i=(b);i>(a);i--)
#define forn(e,c) for(const auto &e : (c))
#define db(x) cout<<#x<< " = "<<(x)<<endl
#define sz(x) ((int)x.size())
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define pp pop_back
#define fst first
#define snd second
#define str string
#define pri(x) cout << (x) << "\n"
#define mset(a,v) memset((a),(v),sizeof(a))
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
using ll = long long;
using pii = pair<int,int>;
using ii = pair<ll,ll>;
using vii = vector<int>;
using vll = vector<ll>;
using vpi = vector<pii>;
using vvll = vector<vector<ll>>;
template<class T>ostream&operator<<(ostream&o,vector<T>const&v){o<<"[ ";for(auto const&x:v)o<<x<<" ";return o<<"]";}
const ll MAXN = 2e5 + 100;
const ll MOD = 998244353;
const ll INF = 1e18;

ll gs(ll x){
    return x * x;
}

void solve(){
    ll n; cin>>n;
    vll a(n+1);
    map<ll,ll>sv, div;
    fore(i,1,n)cin>>a[i];
    ll ans = 1;
    
    fore(i,1,n){
        ll x = a[i];
        ll u = sqrt(x) + 1e-9;  // Raiz cuadrada
        if(u*u == x )//3 or 5 divisors
        {
            ll v = sqrt(u) + 1e-9;
            if(v*v == u)//5 divisors
            {
                div[v] += 4;
            }
            else//3 divisors
            {
                div[u] += 2;
            }
        } else // 4 divisors
        {
            ll t = cbrt(x) + 1e-9;  // Raiz cubica 
            if(t*t*t == x ){
                div[t] += 3;
                continue;
            }
            bool ok = false;
            fore(j,1,n){
                ll u = a[j];
                if(u==x) continue;
                ll gcd = __gcd(u,x);
                if(gcd!=1){
                    ok = true;
                    div[gcd]++;
                    div[x/gcd]++;
                    break;
                }
            }
            if(!ok){
                sv[x]++;
            }
        }
    }
    for(auto x : sv){
        ans = ((ans * (x.snd + 1) % MOD) * (x.snd + 1)) % MOD;
    }
    for(auto x : div){
       // cout<<x.fi<<" "<<x.snd<<"\n";
        ans = (ans * (x.snd+1))% MOD;
    }
    pri(ans);
}
 
int main(){
    FIN; 
    int t = 1;
    //int t; cin>>t; 
    while(t--){
		solve();
	}
    return 0;
}
