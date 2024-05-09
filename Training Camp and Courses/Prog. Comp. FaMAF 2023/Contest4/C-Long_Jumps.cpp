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

ll dp[MAXN];
ll a[MAXN];
ll n;

ll f(ll x){
	if (x>n-1)return 0;
	if(dp[x]!= -1) return dp[x];
	dp[x] = a[x] + f(x + a[x]);
	return dp[x];
	
}


void solve(){
	cin>>n;
	fore(i, 0, n)cin>>a[i];
	mset(dp, -1);
	ll maxs = dp[0];
	fore(i, 1, n){
		maxs = max(maxs, dp[i]);
	}
	pri(maxs);
}
 
int main(){
    FIN; 
    //int t = 1;
    int t; cin>>t; 
    while(t--){
		solve();
	}
    return 0;
}
