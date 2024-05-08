#include<bits/stdc++.h>
using namespace std;
#define fore(i,a,b) for(ll i=(a);i<(b);i++)
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
ll n, k; 
ll dp[MAXN], h[MAXN];

ll f(ll x){
	ll &res = dp[x];
	if (x>=n) return MAXN;
	if (x == n-1) return 0; 
	if (x == n-2) return abs(h[n-1] - h[n-2]);
	if (res != -1) return res;
	ll mins = 1e10 + 10;
	fore(i, 1, k+1){
		mins = min(mins, f(x+i) + abs(h[x] - h[x+i]));
	}
	res = mins;
	return res;
}
void solve(){
	cin>>n>>k; 
	fore(i, 0, n) cin>>h[i];
	mset(dp, -1);
	pri(f(0));
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
