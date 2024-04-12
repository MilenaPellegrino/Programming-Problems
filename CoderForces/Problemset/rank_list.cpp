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

bool cmp(pii a, pii b){
	if(a.fst == b.fst){
		return a.snd < b.snd;
	} else if(a.fst > b.fst){
		return true;
	} else {
		return false;
	}
}
void solve(){
	int n, k; cin>>n>>k;
	vpi a(n);
	map<pii, int, greater<pii>> m;
	fore(i, 0, n){
		int p, t; cin>>p>>t; 
		a[i] = mp(p, t);
		m[mp(p,t)]++;
	}
	sort(all(a), cmp);
	/*cout<<"Imprimiendo el arreglo de pares: "<<endl; 
	fore(i, 0,n){
		cout<<a[i].fst<<" "<<a[i].snd<<endl;
	}
	cout<<"Imprimiendo el map"<<endl;
	for (const auto& par : m) {
        cout << "Clave: (" << par.first.first << ", " << par.first.second << "), Valor: " << par.second << endl;
    } */
	pri(m[a[k-1]]);
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
