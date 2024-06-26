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

//const ll MAXN = 2e5 + 10;
bool can(ll t, vll &cnt){
	ll com = 0, inc = 0;
	fore(i, 0, sz(cnt)){
		if(t>=cnt[i]){
			inc += (t - cnt[i]) / 2;
		} else {
			com += cnt[i] - t;
		}
	}
	return com<= inc;
}
void solve(){
	ll n, m; cin>>n>>m; 
	vll a(m); 
	fore(i, 0, m) cin>>a[i];
	vll cnt(m+1, 0);
	// Binary sarch on the answer 
	fore(i, 1, m+1){
		cnt[a[i-1]]++;
	} 
	ll l = 0, r = (2*n) + 10, res = 0;
	while(l<r){
		ll mid = (l+r+ 1)/2;
		if(can(mid, cnt)){
			r = mid - 1;
			res = mid;
		}
		else{
			l = mid + 1;
			res = mid;
		}
	}
	pri(res);
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
