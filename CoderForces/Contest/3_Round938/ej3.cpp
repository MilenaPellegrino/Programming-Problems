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
template<class T>ostream&operator<<(ostream&o,vector<T>const&v){o<<"[ ";for(auto const&x:v)o<<x<<" ";return o<<"]";}

void solve(){
	ll n, k; cin>>n>>k; 
	vll a(n);
	fore(i, 0, n) cin>>a[i];
	ll cont = 0;
	ll i = 0, j = n-1;
	bool lef = true, band = true; // 4 5, 1 2 4 3 // i = 1, j = 3, cont = 1
	while(band){
		if(lef){ // elimino el primer barco
			lef = false;
			if(k-a[i] > 0){
				k-=a[i];
				cont++;
				i++;
			} else{
				band = false;
				break;
			}
		} else { // elimino el ultimo
			lef = true;
			if(k-a[j] > 0){
				k-=a[j];
				cont++;
				j--;
			} else{
				band = false;
				break;
			}
		}
	}
	pri(n-cont);
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
