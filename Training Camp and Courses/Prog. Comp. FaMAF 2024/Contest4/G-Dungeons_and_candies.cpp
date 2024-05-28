#include<bits/stdc++.h>
using namespace std;
#define fore(i,a,b) for(int i=(a);i<(b);i++)
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
using pi = pair<int,int>;
using ii = pair<ll,ll>;
using vii = vector<int>;
using vll = vector<ll>;
using vpi = vector<pi>;
using vvll = vector<vector<ll>>;
template<class T>ostream&operator<<(ostream&o,vector<T>const&v){o<<"[ ";for(auto const&x:v)o<<x<<" ";return o<<"]";}


// Problema: Construir un arbol de expansion
// Solucion: Encontrar el arbol de expansion minima 

vector<vector<string>> v(1003);
vector<vii> g(1003);
priority_queue<pair<int, pi> > pq;
int arr[1003];
 
 // cant de difs
int f(int x, int y, int n, int m) { // no bug
    int cambios=0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (v[x][i][j] != v[y][i][j]) cambios++;
        }
    }
    return cambios;
}

 
int raiz(int x) {
    if (arr[x]==x) return x;
    arr[x]=raiz(arr[x]);    // rec 
    return arr[x];          // no deb
}

bool unir(int x, int y) {   
    x = raiz(x);
    y = raiz(y);
    if (x==y) return false;
    arr[x]=y;
    return true;
}
 
 // Funcion para imprimir esta mierda
void print(int last, int x) {
    if (arr[x]==-1) return;
    arr[x]=-1;
    cout<<x<<" "<<last<<"\n";   
    // ir sacando el ultimo
    for (; !g[x].empty(); g[x].pop_back()) print(x, g[x].back());
}

void solve(){
    int i, x, y, n, m, cambios=0, k, w;
    string str;
    cin>>n>>m>>k>>w;
    fore(i, 0, k+1) arr[i]=i;
    fore(i, 0, k) {
        fore(j, 0, n) {
            cin>>str;
            v[i].pb(str);
        }
    }
    
    fore(i, 0, k) {
        fore(j, i+1, k) {
            x = f(i, j, n, m)*w;
            //db(x);
            if (x < n*m) pq.push({x*(-1), {i+1, j+1}});
        }
    }
    
    // kruskal

    for(i=1; i<k && !pq.empty(); i++) {
        x = pq.top().snd.fst;
        y = pq.top().snd.snd;
        w = pq.top().fst*(-1);
        // aaaaaaaaaaaaaaaaaaaaaaaa cambios+=w;
        if (unir(x, y)) {
            g[x].pb(y);
            g[y].pb(x);
            cambios+=w;
        }
        else i--;
        pq.pop();
    }
    pri(cambios + n * m * (k-i+1));   // peso
    fore(i, 0, k) print(0, i+1);
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
