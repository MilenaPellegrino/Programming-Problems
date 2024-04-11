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
	int cp; cin>>cp;
	vii cpi(cp);
	fore(i, 0, cp)cin>>cpi[i];
	auto it = max_element(all(cpi));
	int max_p = *it;
	int cd; cin>>cd;
	vii d(cd);
	fore(i, 0, cd) cin>>d[i];
	int cc; cin>>cc;
	vii c(cc);
	fore(i, 0, cc) cin>>c[i];
	int ck; cin>>ck;
	vii k(ck);
	fore(i,0, ck) cin>>k[i];
	int tam = cd +cc+ck;
	vpi gen(tam); // 3=defensa, 2 = centrocampistas, 1 = delanteros
	fore(i, 0, cd){
		gen.pb(make_pair(d[i], 3));
	}
	fore(i, 0, cc){
		gen.pb(make_pair(c[i], 2));
	}
	fore(i, 0, ck){
		gen.pb(make_pair(k[i], 1));
	}
	sort(all(gen));
	reverse(all(gen));
	int p = max_p;
	int n = 0, l = 0, q = 0; // n = def, l = centro, q = delant
	fore(i, 0, 10){
		p+= gen[i].fst;
		if(gen[i].snd == 3){
			n++;
		} else if(gen[i].snd == 2){
			l++;
		} else {
			q++;
		}
	}
	cout<<p<<" "<<n<<"-"<<l<<"-"<<q<<"\n";
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
