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

const int MAXN =1e5+5;
vii adj[MAXN];  // Grafo
vii rec[2];  // Almacenamos las dos partes del grafo
bool visited[MAXN], colors[MAXN], can=true;  // en can guardamos si el grafo puede ser bipartito
 
void dfs(int v, int c){
    if(visited[v]) return;  // Si ya lo visitamos lo retornamos
    visited[v]=true;  // si no lo visitamos, lo visitamos
    colors[v]=c;    // y le asignamos el color "c" (puede ser 0 o 1)
    rec[c].push_back(v);  // Agregamos el vertice en rec, para despues dar la respuesta 
    for(auto t : adj[v]){  // Recorremos los vecinos
        if(!visited[t]) dfs(t,!c);  // Si no lo visitamos, llamamos a dfs con el color opuesto
        else{
            if(colors[v] == colors[t]) can=false; // Si lo visitamos nos aseguramos que no tenga el mismo color, si tiene el mismo color no puede ser bipartito
        }
    }
}
void solve(){
    int n, m; cin>>n>>m;  // Vertices y aristas
    int u, v;
    for(int i=0; i < m; ++i){
        cin>>u>>v;
        adj[u].push_back(v);  // Creamos el grafo
        adj[v].push_back(u);
    }
    fore(i, 1, n+1) dfs(i,0);
    if(!can){
        pri(-1);
        return;
    }
    // Si hay respuesta la imprimimos
    pri(sz(rec[0]));
    for(auto r : rec[0])cout<<r<<" ";

    cout<<"\n";
    pri(sz(rec[1]));
    for(auto r:rec[1])cout<<r<<" ";
    cout<<"\n";
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
