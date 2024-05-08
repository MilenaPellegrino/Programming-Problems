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
const ll INF = 1e18;

const ll MAXN = 1e2 + 10;
const ll MAXV = 2e5 + 10;

ll n, w;
ll wei[MAXN], val[MAXN];
ll dp[MAXN][MAXV];

ll f(ll x, ll y){
    if (y == 0) return 0;
    if (y<0) return INF;
    if (x == n) return INF;
    ll &res = dp[x][y];
    if (res!= -1) return res;
    res = f(x+1, y);
    if(y - val[x]>= 0) res = min(f(x+1, y), f(x+1, y-val[x]) + wei[x]);
    return res;
}

void solve(){
	cin>>n>>w;
	ll sumv = 0;
    fore(i, 0, n){
        cin>>wei[i]>>val[i];
        sumv += val[i];
    }
    mset(dp, -1);
    ll res = 0, temp = 0;
    fore(i, 1, MAXV){
        temp = f(0,i);
        if (temp<=w) res=i;
    }
    pri(res);
    /*
    // Binary search to find the answer
    ll l = 0, r = sumv;
    while (l <= r){
        ll mid = l + (r - l) / 2;
        if (f(0, mid) <= w) l = mid + 1;
        else r = mid - 1;
    } */
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
