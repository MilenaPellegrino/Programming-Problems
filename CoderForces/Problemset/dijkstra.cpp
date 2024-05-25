#include <bits/stdc++.h>
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
using ii = pair<ll,ll>;
using vii = vector<int>;
using vll = vector<ll>;
using vpi = vector<ii>;
using vvi = vector<vector<ll>>;
template<class T>ostream&operator<<(ostream&o,vector<T>const&v){o<<"[ ";for(auto const&x:v)o<<x<<" ";return o<<"]";}

ll N, M; 
vll rec, paths;

int dijkstra(vvi& G, vvi& W, ll n, ll s, ll t, vll& path) {
    vector<bool> vis(n, false); // nodos visitados, inicialmente ninguno
    vll dist(n, LLONG_MAX); // distancia mínima desde el origen, inicializada a infinito
    vll pred(n, -1); // predecesores para reconstruir la ruta
    priority_queue<ii, vector<ii>, greater<ii>> Q; // cola de prioridad min-heap
    Q.push({0, s}); // introducimos el nodo origen (a distancia 0 de él mismo)
    dist[s] = 0; // la distancia del nodo origen a sí mismo es 0

    while (!Q.empty()) {
        ii arc = Q.top(); // arco con menor peso
        Q.pop(); // lo quitamos de la cola

        ll v = arc.second; // vértice de Q a menor distancia del nodo origen
        ll p = arc.first; // distancia entre el nodo origen y v
        
        if (v == t) { // si es el nodo destino hemos acabado
            // Reconstruir la ruta
            path.clear();
            for (ll at = t; at != -1; at = pred[at]) {
                path.push_back(at);
            }
            reverse(path.begin(), path.end());
            return p; // retornar la distancia mínima
        }

        if (!vis[v]) { // si no lo hemos visitado
            vis[v] = true;
            for (size_t i = 0; i < G[v].size(); ++i) { // miramos sus vecinos
                ll u = G[v][i];
                ll w = W[v][i];

                if (!vis[u] && dist[u] > p + w) { // si no lo hemos visitado y encontramos una distancia menor
                    dist[u] = p + w; // actualizamos la distancia
                    pred[u] = v; // actualizamos el predecesor
                    Q.push({dist[u], u}); // añadimos los vecinos con la distancia a s
                }
            }
        }
    }
    return -1; // no hay caminos entre s y t
}

void solve(){
    cin >> N >> M; 
    vvi G(N), W(N);
    fore(i, 0, M){
        ll a, b, w; 
        cin >> a >> b >> w;
        a--; b--; // Indexamos en 0 
        G[a].pb(b);
        G[b].pb(a);
        W[a].pb(w);
        W[b].pb(w);
    }

    ll res = dijkstra(G, W, N, 0, N-1, paths);
    if (res == -1){
        pri(-1);
        return;
    }
    fore(i, 0, sz(paths)) cout << paths[i] + 1 << " ";
    cout << endl;
}
 
int main(){
    FIN; 
    int t = 1;
    //int t; cin>>t; 
    while (t--){
        solve();
    }
    return 0;
}
