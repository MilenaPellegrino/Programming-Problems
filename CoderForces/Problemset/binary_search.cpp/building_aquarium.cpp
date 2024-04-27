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

ll n;
bool can(ll higha, ll h, vll &a){
	ll suma = 0;
	fore(i, 0, n){
		suma += max(higha - a[i], 0LL);
		if(suma>h) return false;
	}
	if(suma<=h) return true;
	else return false;
}
void solve(){
	ll x; cin>>n>>x;
	vll a;
	fore(i, 0, n){
		ll ai; cin>>ai; 
		a.pb(ai);
	}
	// Binary search on the answer 
	ll low = 0, high = 2e9+10;
	while(low<high){
		ll med = ((low +high) + 1) / 2; 
		if(can(med, x, a)){
			low = med;
		}
		else high = med - 1;
	}
	pri(low);
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
