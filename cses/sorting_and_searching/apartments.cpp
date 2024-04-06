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
#define fst first
#define snd second
#define str string
#define mp make_pair
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
	int n, m, k; cin>>n>>m>>k;
	vii ap(n); fore(i, 0, n) cin>>ap[i];
	set<pii> s;
	fore(i, 0, m){
		int ai; cin>>ai;
		s.insert(mp(ai-k, ai+k));
	}
	sort(all(ap));
	fore(i, 0, n){
		auto it = lower_bound(all(s), ap[i]);
		if(it!=s.end()){
			int pos = it - s.begin();
			// Vemos si esta en el rango deseado
			if(ap[i] >=)
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
