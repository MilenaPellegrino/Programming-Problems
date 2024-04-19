#include<bits/stdc++.h>
using namespace std;
#define fore(i,a,b) for(int i=(a);i<(b);i++)
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
template<class T>ostream&operator<<(ostream&o,vector<T>const&v){o<<"[ ";for(auto const&x:v)o<<x<<" ";return o<<"]";}

void solve(){
	int n, k; cin>>n>>k; 
	vii au, a(n); fore(i, 0, n)cin>>a[i];
	vii sle(n); fore(i, 0, n) cin>>sle[i];
	// Hacemos el arreglo con todas las veces que esta durmiendo 
 	fore(i, 1, n+1){
		if(sle[i-1] == 0){
			au.pb(a[i-1]);
		} else {
			au.pb(0);
		}
	}
	vii ps(sz(au)+1);
	ps[0]=0;
	//db(sz(au));
	// Arreglo de usmas parciales del vector donde esta durmiendo 
	fore(i, 1, sz(au)+1){
		ps[i] = ps[i-1] + au[i-1];
	}
	//cout<<au<<endl;
	//cout<<ps<<endl;
	int sum_awake = 0; // suma cuando esta despierto en general
	fore(i, 1, n+1){
		if(sle[i-1] == 1)sum_awake +=a[i-1];
	}
	//db(sum_awake);
	// Buscamos el maximo que le puedo sumar a mi suma general, usando que puedo despertarlo
	int sum_sleep = 0;
	fore(i, k, n+1){
		int maux = ps[i] - ps[i-k];
		if(maux>= sum_sleep){
			sum_sleep = maux;
		}
	}
	pri(sum_awake + sum_sleep);
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
