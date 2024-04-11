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
	vii h(n); fore(i, 0, n) cin>>h[i]; 
	vii sp(n, 0);
	fore(i, 0, n-2){
		int kaux = k; 
		while(kaux>0){
			sp[i] += h[i+kaux-1];
			kaux--;
		}
	}
	//cout<<sp<<endl;
	int posmin = 1;
	int minelem = 1e6 + 10;
	fore(i, 0, sz(sp)){
		if(sp[i] == 0) continue;
		if(sp[i] <= minelem){
			posmin = i+1;
			minelem = sp[i];
		}
	}
	pri(posmin);
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
