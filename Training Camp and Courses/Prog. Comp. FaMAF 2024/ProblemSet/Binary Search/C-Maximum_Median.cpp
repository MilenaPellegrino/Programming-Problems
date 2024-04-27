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
 
ll n, k;
vll a;
bool can(ll x){
	ll mov = 0;
	fore(i, n/2, n){
		//db(mov); db(x); db(a[i]); db(x-a[i]);
		if(x-a[i] > 0) mov+=x-a[i];
		if(mov > k) return false;
	}
	if(mov<=k)return true;
	else return false;
}
void solve(){
	cin>>n>>k;
	fore(i, 0, n){
		ll ai; cin>>ai; 
		a.pb(ai);
	}
	sort(all(a));
	// Binary Search
	ll small = 1;
	ll big = 2e9+10; 
	while(small!=big){
		//db(small); db(big);
		ll mid = (small + big + 1)/2;
		if(can(mid)) small = mid; 
		else big = mid-1;
	}
	pri(small);
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
