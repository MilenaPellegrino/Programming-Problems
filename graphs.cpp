#include<bits/stdc++.h>
#define pb push_back
#define fst first
#define snd second
#define str string
#define fore(i,a,b) for(int i=(a);i<(b);i++)
#define DBG(x) cout<<#x<< " = "<<(x)<<endl
#define pri(x) cout << (x) << "\n"
#define ALL(x) (x).begin(),(x).end()
#define SZ(x) ((int)x.size())
#define mset(a,v) memset((a),(v),sizeof(a))
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
typedef long long ll;
using namespace std; 

// Recorrer un grafo usando bfs 
vector<int> bfs(vector<vector<int>>& graph, int v){
	vector<int> d(SZ(graph), -1);
	queue<int> q; 
	d[v] = 0; 
	q.push(v);
	while(!q.empty()){ // MIentras haya nodos a procesar
		int x = q.front();
		q.pop();
		for(int y : graph[x]){ // Para cada vecino y de x 
			if(d[y] == -1){ // Si y no fue procesado 
				d[y] = d[x] + 1;
				q.push(y);
			}
		}
	}
	return d;  // d contiene las distancias desde v o -1 si no se puede llegar
}
int nodos = 4; 
vector<vector<int>> graphs(nodos);
vector<bool> visitado(nodos, false);

// Recorrer una grafo usando DFS
void DFS(int node){
	stack<int> s;
	s.push(node);
	while(SZ(s)){ // mientras haya nodos por procesar
		int x = s.top();
		visitado[x]  = true; 
		s.pop();
		for(int y : graphs[x]){ // para cada vecino y de x 
			if(!visitado[y]){ // si y no fue visitado
				s.push(y);
			}
		} 
	}
}
// Recorrer usando un grafo usando DFS recursivamente 
void DFS(int node){
	visitado[node] = true; 
	for(int y : graphs[node]){
		if(!visitado[y]){
			DFS(y);
		}
	}
}

int main() {
    FIN;
	// IMPLEMENTAR MATRIZ DE ADYACENCIA 	
	int n, m; cin>>n>>m; 
	int graph[n][n] = {0};
	fore(i, 0, m){
		int a, b; cin>>a>>b;
		graph[a][b]=1;
		graph[b][a] = 1; 
	}
	fore(i, 0, n){
		fore(j, 0, m){
			cout<<graph[i][j]<<" ";
		}
		cout<<endl;
	}
	
	// IMPLEMENTAR LISTA DE ADJYACENCIA 
	vector<vector<int>> grap;
	int nn, mm; cin>>nn>>mm;
	grap.resize(nn);
	fore(i, 0, mm){
		int aa, bb; cin>>aa>>bb; 
		grap[aa].pb(bb);
		grap[bb].pb(aa);
	}
	vector<int> dis = 
    return 0;
}


