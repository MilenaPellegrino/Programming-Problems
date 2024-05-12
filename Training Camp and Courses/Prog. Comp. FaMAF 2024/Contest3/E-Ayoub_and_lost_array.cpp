#include<bits/stdc++.h>
using namespace std;
#define fore(i,a,b) for(int i=(a);i<(b);i++)
#define forr(i, a, b) for(int i=(b);i>(a);i--)
#define forn(e,c) for(const auto &e : (c))
#define db(x) cout<<#x<< " = "<<(x)<<endl
#define sz(x) ((int)x.size())
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define pp pop_back
#define mp make_pair
#define fst first
#define snd second
#define str string
#define pri(x) cout << (x) << "\n"
#define mset(a,v) memset((a),(v),sizeof(a))
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vii = vector<int>;
using vll = vector<ll>;
using vpi = vector<pii>;
template<class T>ostream&operator<<(ostream&o,vector<T>const&v){o<<"[ ";for(auto const&x:v)o<<x<<" ";return o<<"]";}

const ll MOD = 1e9 + 7;
const ll MAXN = 2e5 + 10;
ll dp[MAXN][3];
ll c0, c1, c2; // Cantidad de nums dbs por 3 con resto(0, 1, 2) entre l y r

ll d(ll x, ll r){ // Cuantos numeros hay entre 1 y x cuyo resto en la division por 3 sea r 
	if(r==0) return x/3; 
	else if(r == 1) return (x+2)/3; 
	else return (x+1)/3;
}
ll f(ll x, ll r){ // Me quedan "x" numeros por poner y vengo con resto r
	if(x==0 && r==0) return 1;
	if(x == 0) return 0;
	ll &res = dp[x][r];
	if(res!= -1) return res;
	res = (c0 * f(x-1, r) + c1*f(x-1, (r+1)%3) + c2*f(x-1, (r+2) %3)) % MOD;
	return res;
}
void solve(){
	ll n, l, r; cin>>n>>l>>r;
	mset(dp, -1);
	c0 = d(r, 0) - d(l-1, 0);
	c1 = d(r, 1) - d(l-1, 1);
	c2 = d(r, 2) - d(l-1, 2);
	ll ans = f(n, 0);
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
