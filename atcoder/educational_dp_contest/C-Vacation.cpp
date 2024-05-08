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

const ll MAXN = 1e5 +10;
ll n;
ll dp[MAXN][3], a[MAXN][3]; 

ll f(ll x, ll y){
	ll &res = dp[x][y];
	if (x == n) return 0;
	if(res != -1) return res;
	res= max(f(x+1, (y+1)%3) + a[x][(y+1) % 3], f(x+1, (y+2) % 3) + a[x][(y+2) %3]);
	return res;
}
void solve(){
	//mset(dp, -1);
	cin>>n;
	fore(i, 0, n){
		fore(j, 0, 3){
			cin>>a[i][j];
			dp[i][j] = -1;
		}
	}
	ll r1 = f(0, 0);
	ll r2 = f(0, 1);
	ll r3 = f(0, 2);
	pri(max({r1, r2, r3}));
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
