#include<bits/stdc++.h>
using namespace std;
#define fore(i,a,b) for (ll i=(a);i<(b);i++)
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


// Hacer lo mismo que el counting rooms a diferencia que cada vez  que encuentro una componente conexa guarda esa compoennte en un vector, y despues ver como imprimir la solucion (hacerlo desde 0)

ll n, m; 
vvll g(n+1, vll(m+1));

void solve(){
    cin>>n>>m; 
    // Lo guardo como una lista de adyacencia

    fore(i, 1, m+1){
        ll ma, mb; cin>>ma>>mb;
        g[ma].pb(mb); 
        g[mb].pb(ma);
    }

    fore(i, 1, n+1){
        fore(j, 1, m+1){
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
