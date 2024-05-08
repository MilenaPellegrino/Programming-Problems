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

const ll MAXS = 3010;
string s, t; 
ll dp[MAXS][MAXS];
vll bld;

ll f(ll x, ll y){
	ll tams = sz(s);
	ll tamt = sz(t);
	if (x  == tams) return 0; 
	if (y == tamt) return 0;
	ll &res = dp[x][y]; 
	if(res!= -1) return res; 
	ll r = max(f(x+1, y), f(x, y+1));
	res = r;
	if (s[x] == t[y]) res = max(r, 1+f(x+1, y+1));
	return res;
}

void build(ll x, ll y){
	// casos bases
	if (x == sz(s) || y == sz(t)) return;
	ll res = f(x, y);
	if (f(x+1, y) == res) build(x+1, y); 
	else if (f(x, y+1) == res) build(x, y+1); 
	else {
		bld.pb(x);
		build(x+1, y+1);
	}
}
void solve(){
	cin>>s>>t;
	mset(dp, -1);
	build(0, 0);
	forn(i, bld) cout<<s[i];
	cout<<"\n";
}
 
int main(){
    FIN; 
    int ts = 1;
    //int t; cin>>t; 
    while(ts--){
		solve();
	}
    return 0;
}
