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
using vvll = vector<vector<ll>>;
template<class T>ostream&operator<<(ostream&o,vector<T>const&v){o<<"[ ";for(auto const&x:v)o<<x<<" ";return o<<"]";}

// dado un nodo v visita a todos los nodos conectados a v
void dfs (ll v, vvll &G, vector<bool> &visited, ll stop) {
	if(v == stop)return;
    //if (visited[v]) return;
    visited[v] = true;

    fore (i,0, sz(G)){ //iteramos por todos los vecinos
		if(G[v][i] && !visited[v]){
			dfs(v, G, visited, stop); // lo visitamos
		}
    }
}

void solve(){
	int n; cin>>n; 
	vvll G(n, vector<ll>(n, 0)); // G[v] es un vector con los vecino de v 
	vector<bool> visited(n, false), canReach(n); // visited[v] es true si hemos visitado v
	vvll res(n, vll(n));
	// Leemos el grafo de entrada
	fore(i, 0, n){
		fore(j, 0, n){
			cin>>G[i][j];
		}
	}
	dfs(0, G, visited, -1); // -1 para que recorra todo
	fore(u, 0, n){
		canReach[u] = visited[u];
	}
	fore(v, 0, n){
		if(canReach[v]){
			//mset(visited, false);
			fore(i, 0, n)visited[i] =false;
			dfs(0, G, visited, v);  // para que recorra hasta el nodo v
			fore(u, 0, n){
				if(canReach[u] && !visited[u]){ // v domina a u
					res[v][u] = true;
				}
			}
		}
	}
	fore(i, 0, n){
		fore(j, 0, n){
			if(res[i][j]) cout<<"Y ";
			else cout<<"N ";
		}
		cout<<"\n";
	}
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
