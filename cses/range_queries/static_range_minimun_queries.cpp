#include<bits/stdc++.h>
using namespace std;
#define fore(i,a,b) for(ll i=(a);i<(b);i++)
#define rof(i, a, b) for(int i=(b);i>(a);i--)
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
using ii = pair<ll,ll>;
using vii = vector<int>;
using vll = vector<ll>;
using vpi = vector<pii>;
using vvll = vector<vector<ll>>;
template<class T>ostream&operator<<(ostream&o,vector<T>const&v){o<<"[ ";for(auto const&x:v)o<<x<<" ";return o<<"]";}

// O(log n) (memeoria y tiempo)
// [)
template<class T>
struct RMQ {
	vector<vector<ll>> jmp;
	RMQ(const vector<ll>& V) : jmp(1, V) {
		for (ll pw = 1, k = 1; pw * 2 <= sz(V); pw *= 2, ++k) {
			jmp.emplace_back(sz(V) - pw * 2 + 1);
			fore(j,0,sz(jmp[k]))
				jmp[k][j] = min(jmp[k - 1][j], jmp[k - 1][j + pw]);
		}
	}
	ll query(ll a, ll b) {
		assert(a < b); // or return inf if a == b
		ll dep = 63 - __builtin_clzll(b - a);
		return min(jmp[dep][a], jmp[dep][b - (1 << dep)]);
	}
};

void solve(){
	ll n, q; cin>>n>>q; 
    vll a(n);
    fore(i, 0, n)cin>>a[i];
    RMQ<int> rmq(a);
    fore(i, 0, q){
        ll a, b; 
        cin>>a>>b;  
         a--; b--;
        pri(rmq.query(a, b+1));
    }
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

