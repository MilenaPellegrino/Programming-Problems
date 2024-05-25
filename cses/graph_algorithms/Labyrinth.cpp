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
ll n, m, x, y; 
char c; 
char g[MAXN][MAXN];
vpll moves = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}}; // derecha - izquierda - arriba - abajo
ll vis[MAXN][MAXN];
vector<char> path;

// FUncion valid que verifia que no nos salimos de la matriz
bool isValid(int x , int y){
	if(x < 1 || x > n || y < 1 || y > m) return false;
	if(g[x][y] == '#' || vis[x][y] == true) return false;
	
	return true;
}


// Funcion bfs modificada, retorna ture si pude llegar del nodo a al nodo b 
bool bfs(ll x , ll y){
	queue<pair<ll,ll>> q;
	q.push({x , y});
	vis[x][y] = true;
	
	while(!q.empty()){
		int a = q.front().first;
		int b = q.front().second;
		q.pop();
		
		if(g[a][b] == 'B'){
			while(1){
				path.pb(br[a][b]);
			
				if(path.back() == 'L') b++;
				if(path.back() == 'R') b--;
				if(path.back() == 'U') a++;
				if(path.back() == 'D') a--;
				
				if(a == x && b == y)
				break;
			}
			return true;
		}
		
		//left
		if(isValid(a , b - 1)) br[a][b-1] = 'L' , q.push({a , b-1}) , vis[a][b-1] = true;
		
		//right
		if(isValid(a , b + 1)) br[a][b+1] = 'R' , q.push({a , b+1}) , vis[a][b+1] = true;
		
		//up
		if(isValid(a - 1, b)) br[a - 1][b] = 'U' , q.push({a - 1 , b}) , vis[a-1][b] = true;
		
		//down
		if(isValid(a + 1, b)) br[a + 1][b] = 'D' , q.push({a + 1 , b}) , vis[a+1][b] = true;
		
	}
	
	return false;
}
void solve(){
	cin>>n>>m;

    // Paso la matrzi de entrada a cosas manejables 
    fore(i, 0, n){
        fore(j, 0, m){
            cin>>c; 
            g[i][j] = c; 
            if(c=='A'){
                x = i;
                y = j; 
            }
        }
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
