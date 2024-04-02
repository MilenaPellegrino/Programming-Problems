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
vii p;
vii bi = {0,  1, 
	      10, 11, 
	      100, 101, 110, 111, 
	      1000, 1001, 1011, 1111, 1100, 1101, 1110, 1010, 
	      10000, 10001, 10010, 10011, 10100, 10110, 10111, 11000, 11001, 11010, 11011, 11110, 11100, 11101, 11110, 11111, 
	      1010000, 1010001, 1010010, 1010011, 1010100, 101010, 1010110, 1010111, 
	      1011000, 1011001, 1011010, 1011011, 1011110, 1011100, 1011101, 1011111, 
	      1110000, 1110001, 1110010, 1110011, 1110100, 111010, 1110110, 1110111, 
	      1111000, 1111001, 1111010, 1111011, 1111100, 1111101, 1111110, 1111111};

bool bs(vector<int> arr, int n, int x) {
  int inicio = 0;
  int fin = n - 1;

  while (inicio <= fin) {
    int medio = (inicio + fin) / 2;

    if (arr[medio] == x) {
      return true;
    } else if (arr[medio] < x) {
      inicio = medio + 1;
    } else {
      fin = medio - 1;
    }
  }

  return false;
}
void solve(){
	int n; cin>>n;
	fore(i, 50, 70){
		cout<<p[i]<<" ";
	}
	// BInary search 
	if(bs(p, sz(p), n)){
		cout<<"YES\n";
	}else{
		cout<<"NO\n";
	}

}
 
int main(){
    FIN; 
    fore(i, 0, sz(bi)){
		for(int j = i+1; j<sz(bi); j++){
			p.pb(bi[i] * bi[j]);	
		}
	}
	sort(all(p));
    int t; cin>>t; 
    while(t--){
			solve();
	}
    return 0;
}
