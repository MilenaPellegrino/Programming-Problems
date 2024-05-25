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

const ll MAXN = 1e5 + 10;
ll n, m;
vvll g(MAXN);
//vector <bool> visited; // Nos dice si hemos visitado algun nodo 

/*
void bfs(vvll &G, ll v){
    queue <ll> Q;  // Lista de nodos a visitar 
    Q.push(v); //empezamos con el nodo origen

    while (!Q.empty()){ //mientras nuestra lista tenga nodos
        ll u = Q.front(); //seleccionamos el primer nodo de la lista
        Q.pop(); //y lo eliminamos
        
        if (!visited[u]){ //si no lo hemos visitado
            visited[u] = true;

            for (ll i = 0; i < G[u].size(); ++i){
                ll w = G[u][i];

                Q.push(w); //ponemos a sus vecinos en la lista
            }
        }
    }
}

*/
void solve(){
	cin>>n>>m; 
	fore(i, 0, m){
		ll a, b; cin>>a>>b; 
		a--; b--; 
		g[a].pb(b); g[b].pb(a);
	}
	fore(i, 0, n){
		fore(j, 0, m){
			cout<<g[i][j]<<" ";
		}
		cout<<"\n";
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


/*
 
vector<int> ar[100001];
int dist[100001];
int par[100001];
bool vis[100001];
 
int n , m;
 
bool bfs(){
	queue<int> q;
	dist[1] = 1;
	vis[1] = 1;
	q.push(1);
	
	while(!q.empty()){
		int node = q.front();
		q.pop();
		
		if(node == n) return true;
		
		for(int u : ar[node])
		if(vis[u] == false){
			dist[u] = dist[node] + 1;
			vis[u] = true;
			par[u] = node;
			q.push(u);
		}
	}
	
	return false;
}
 
int main()
{
	int a , b;
	
	cin>>n>>m;
	
	REP(i , m) cin>>a>>b , ar[a].pb(b) , ar[b].pb(a);
	
	if(bfs()){
		cout<<dist[n]<<endl;
		
		int path = n;
		vector<int> res;
		while(path != 0) res.pb(path) , path = par[path];
		
		reverse(res.begin() , res.end());
		for(int node : res) cout<<node<<" ";
	}
	else cout<<"IMPOSSIBLE";
}
*/