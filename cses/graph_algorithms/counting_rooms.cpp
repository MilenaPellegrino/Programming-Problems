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
using vi = vector<int>;
using vll = vector<ll>;
using vpi = vector<pii>;
using vpll = vector<pll>;
using vvll = vector<vector<ll>>;
using vvi = vector<vector<int>>;
template<class T>ostream&operator<<(ostream&o,vector<T>const&v){o<<"[ ";for(auto const&x:v)o<<x<<" ";return o<<"]";}

const ll MAXN = 1010;
ll n, m, res = 0; 
char c; 
bool vis[MAXN][MAXN];
vpll moves = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}}; // derecha - izquierda - arriba - abajo

// Funcion can, que me deice si es valido moverme, es decir si estamos dentro de la matriz
bool can(ll i, ll j){
	// Primero verifico no pasarme de mi matriz
	if (i < 0 || i >= n){ // me pase en algun borde de la matriz (no puedo hacer bfs)
		return false;
	}
	if(j < 0 || j>= m){ // me pase en algun borde de la matriz (no har bfs)
		return false;
	}
	if (vis[i][j]){
		return false;
	}	
	return true;
}
// Hago un dfs "modificado" dado la posicion en la que hay un nodo, recorroo todos los nodos conectado a el 
void dfs(ll x, ll y){
	vis[x][y] = true; // Hemos visitado el nodo
	// Iterar por los vecinos (viendo si es algo valido, si estamos dentro de la matriz)
	
	for(auto mov : moves){ // moves son todos los movimientos que puedo hacer (arriba, abajo, derecha, izquierda)
		if(can(x+mov.fst, y+mov.snd)){ 
			dfs(x+mov.fst, y+mov.snd); // funcion recursiva del dfs "normal"
		}
	}
}

// Función para contar componentes conexas
ll numConexas() {
	ll cont = 0;
	// Recorro toda la matriz
	fore(i, 0, n){
		fore(j, 0, m){
			if (!vis[i][j]){ //Si es uno de mis nodos 
				dfs(i, j);	 // Recorro todos sus vecinos
				cont++;		// Incremento en 1 el contador
			}
		}
	}
	return cont;
}

void solve(){
	cin>>n>>m;
	// Paso directamente la matriz de entrada a cosas manejables (true y false, 0 y 1)
	fore(i, 0, n){
		fore(j, 0, m){
			cin>>c;
			if(c=='#'){
				vis[i][j] = true;
			} else{
				vis[i][j] = false;
			}
		}
	}
	res = numConexas();
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

