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

ll find_mex(vector<ll> a){ // O(n log n)
	set<ll> st;
	fore(i, 0, sz(a)+1){
		st.insert(i);
	}
	fore(i, 0, sz(a)){
		if(st.count(a[i])){
			st.erase(a[i]);
		}
	}
	auto it = st.begin();
	return *it;
}
 
int main(){
    FIN; 
	ll n; cin>>n; 
	vll a(n); fore(i, 0, n) cin>>a[i];
	pri(find_mex(a));
    return 0;
}
