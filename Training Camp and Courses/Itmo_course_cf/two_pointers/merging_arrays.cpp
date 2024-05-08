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
	ll n, m; cin>>n>>m; 
	vll a(n); fore(i, 0, n) cin>>a[i];
	vll b(m); fore(i, 0, m) cin>>b[i];
	ll i = 0, j =0; 
	while(i<n || j<m){
		if(i==n-1){
			cout<<b[j]<<" ";
			j++;
		} else if(j==m-1){
			cout<<a[i]<<" ";
			i++;
		} else if(a[i] < b[j] && i!=n-1){
			cout<<a[i]<<" ";
			i++;
		} else {
			cout<<b[j]<<" "; 
			j++;
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
