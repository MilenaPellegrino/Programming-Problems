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

const ll MAXN = 1e5 + 10;
const ll INF = 1e18;
ll n; 
vll a(MAXN), b(MAXN); 
//ll dpa[MAXN], dpb[MAXN];
ll dp[MAXN][2];

ll f(int x,ll y){
    if(x<0) return 0;
    //if (x==0 && y == 0) return a[0]; 
    //if (x == 0 && y== 1) return b[0]; 
    
    ll &res = dp[x][y];
    if(res!=-1) return res;
    if(y==0) res = max(f(x-1,y), f(x-1,y+1) + a[x]); 
    else res = max(f(x-1,y), f(x-1,y-1) + b[x]);
    return res;
}

void solve(){
	cin>>n;
	fore(i, 0,n)cin>>a[i];
	fore(i, 0, n) cin>>b[i];
	mset(dp, -1);
	
	ll res = max(f(n-1, 0), f(n-1, 1)); // AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA 
	pri(res);
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
