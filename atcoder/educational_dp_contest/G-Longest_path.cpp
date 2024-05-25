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
using vpi = vector<ii>;
using vvll = vector<vector<ll>>;
template<class T>ostream&operator<<(ostream&o,vector<T>const&v){o<<"[ ";for(auto const&x:v)o<<x<<" ";return o<<"]";}

ll N, M, t = 0; 
vvll G;
vpi E;

vll topoSort(const vvll& gr) {
    vll indeg(sz(gr)), ret;
    for (auto& li : gr) for (ll x : li) indeg[x]++;
    queue<ll> q; // use priority_queue for lexic. largest ans.
    fore(i,0,sz(gr)) if (indeg[i] == 0) q.push(i);
    while (!q.empty()) {
        ll i = q.front(); // top() for priority queue
        ret.push_back(i);
        q.pop();
        for (ll x : gr[i])
            if (--indeg[x] == 0) q.push(x);
    }
    return ret;
}

ll find(ll V, const vvll &adj) {
    vll topOrder = topoSort(adj);

    vll dist(V, INT_MIN);
    dist[topOrder[0]] = 0;

    for (ll u : topOrder) {
        if (dist[u] != INT_MIN) {
            for (int v : adj[u]) {
                if (dist[v] < dist[u] + 1) {
                    dist[v] = dist[u] + 1;
                }
            }
        }
    }

    return *max_element(dist.begin(), dist.end());
}
void solve(){
	cin>>N>>M; 
    G.assign(N, vll()); 
    E.assign(M, {0, 0}); 
    fore(i, 0, M){
        ll x, y; cin>>x>>y; 
        x--; y--; // Para indezar en 0 
        //G[x].pb(y);
        t = max(t, max(x+1, y+1));
        E[i].fst = x;
        E[i].snd = y;
    }
    G.assign(t, vll());
    for (auto &e:E) {
        G[e.fst].pb(e.snd);
    }
     ll res = find(t, G);
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
