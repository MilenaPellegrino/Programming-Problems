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

bool ord(tuple<ll, ll, ll> a, tuple<ll, ll, ll> b){
	if(get<0>(a) != get<0>(b)) return get<0>(a)> get<0>(b); 
	else return get<1> (a) > get<1>(b);
}
void solve(){
	ll n, c; cin>>n>>c; 
	vector<tuple<ll, ll, ll>> f(c);
	fore(i, 0, n){
		ll a; cin>>a; 
		if(get<0>(f[a-1]) == 0) get<1>(f[a-1]) = n-i;
		get<0>(f[a -1]) ++; 
		get<2>(f[a-1]) = a;
	}
	sort(all(f), ord);
	cout<<endl;
	fore(i, 0, c){
		if(get<0>(f[i]) == 0)continue;
		while(get<0>(f[i])--) cout<<get<2>(f[i])<<" ";
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
