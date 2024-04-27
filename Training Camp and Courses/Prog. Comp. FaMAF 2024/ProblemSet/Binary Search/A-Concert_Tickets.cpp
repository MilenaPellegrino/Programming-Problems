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
#define lb lower_bound
#define ub upper_bound
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
	ll n, m; cin>>n>>m;
	multiset<ll> ms;
	fore(i, 0, n){
		ll msi; cin>>msi;
		ms.insert(msi);
	}
	//forn(e, ms)cout<<e<<endl;
	vii t(n); 
	fore(i, 0, m){
		ll ti; cin>>ti; 
		auto it = ms.ub(ti);
		ll r = -1;
		if(it!= ms.begin()){
			it--;
		} else {
			pri(r);
			continue;
		}
		if(it!= ms.end()){
			r = *it;
			ms.erase(it);
		} 
		pri(r);
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
