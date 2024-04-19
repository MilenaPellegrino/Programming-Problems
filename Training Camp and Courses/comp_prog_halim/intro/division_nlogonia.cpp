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
	ll k, x, y, n, m; cin>>k; 
	while(k!=0){
		cin>>n>>m;
		while(k--){
			 cin>>x>>y;
			// Border lines
			if((x==n) || (y==m)){
				cout<<"divisa";
			} else if((x<m) && (y>n)){ // in northwestern
				cout<<"NO";
			} else if((x>m) && (y>n)){ // in northeastern
				cout<<"NE";
			} else if((x>m) && (y<n)){ // in southeastern
				cout<<"SE";
			} else if (x < m && y < n) {
				cout<<"SO";
			}
			cout<<"\n";
		}
		cin>>k;
	}
	return;
}
 
int main(){
    FIN; 
    int t = 1;
    while(t--){
		solve();
	}
    return 0;
}
