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
const ll MAXN = 1010;
const ll INF =  1e18 + 10;
vector<ii> h[MAXN];
ii arr[MAXN];
ll ans[MAXN], n, m;
vll pre;

// Algoritmode dijkstra modificado 
// id representa la ciudad desde la que comenzo el calculo 
// w representa la lentitud de la bicicleta
void dijkstra(ll id, ll w) {  
    vll dis(n + 1, INF);
    dis[id] = 0;
    priority_queue<ii, vector<ii>, greater<ii>> pq;
    pq.push({0, id});
    while (!pq.empty()) {
        ll t = pq.top().snd;
        ll dist_t = pq.top().fst;
        pq.pop();
        if (dist_t > dis[t]) continue;
        for (auto x : h[t]) {
            ll now = x.fst;
            ll len = x.snd;
            if (len + dis[t] < dis[now]) {
                dis[now] = len + dis[t];
                pq.push({dis[now], now});
            }
        }
    }
    // Calcular el tiempo minimo para llegar a la ciudad n desde la ciudad id con lentitud w
    ans[id] = dis[n] * w;
    // Comparamos con el tiempo minimo de las ciudades previas
    for (auto x : pre)
        ans[id] = min(ans[id], dis[x] * w + ans[x]);
}

 
void solve(){
    cin>>n>>m;
    fore(i, 1, n+1) h[i].clear();
    fore(i, 1, m+1) {
        ll a, b, w; cin>>a>>b>>w;
        h[a].push_back({b, w});
        h[b].push_back({a, w});
    }
    fore(i, 1, n+1) {
        ll x; cin>>x;
        arr[i] = {x, i};
    }
    sort(arr + 1, arr + 1 + n);
    // sort(all(arr));
    //cout<<arr<<endl;
    pre.clear();
    fore(i, 1, n+1) {
        dijkstra(arr[i].snd, arr[i].fst);
        pre.pb(arr[i].snd);
    }
    // pri(ans[0]);
    pri(ans[1]);
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
