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

/*
5 2
2 5 3 4 8
1 4
4 5

cost = { 2, 5, 3, 4, 8}
G = {
   0- 3
   1- 
   2- 
   3- 0, 4
   4- 3
}
mins = LLONG_MAX
visted = {true, false, false, true, false, false, false}
res = 

*/

const ll N = 1e5+5;
ll mins=LLONG_MAX, res =0 ;
vll cost(N);  // Costo de expandir el rumor
vvll G(N);   // Grafo

bool visited[N];

ll dfs(ll i){
    ll mins=cost[i];
    visited[i]=true;
    for(auto it:G[i]){
        if(!visited[it]){
            mins=min(mins,dfs(it));
        }
    }
    return mins;
} 

void solve(){
	ll n, m; cin>>n>>m;
    fore(i, 0, n)cin>>cost[i];
    fore(i, 0, m){
        ll x, y; cin>>x>>y; 
        x--; y--;
        G[x].pb(y);
        G[y].pb(x);
    }
    fore(i, 0, n)visited[i]=false;

    fore(i, 0, n){
        if (!visited[i]){
            res+=dfs(i);
            mins=LLONG_MAX;
        }
    }
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
