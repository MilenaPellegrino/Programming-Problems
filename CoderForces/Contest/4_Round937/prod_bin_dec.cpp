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

vii bi;

bool ok(int n){
	if(n==1)return true;
	bool ans = false; 
	for(int i:bi){
		if(i==0)continue;
		if(n%i == 0){
			ans = ans | ok(n/i);
		}
	}
	return ans;
}
void solve(){
	int n; cin>>n;
	cout<<(ok(n) ? "YES\n" : "NO\n");
	
}
 
int main(){
    FIN; 
    //int t = 1;
    fore(i, 2, 100000){
		int c = i;
		bool band = false;
		while(c){
			if(c%10 > 1){
				band = true;
				break;
			}
			c/=10;
		}
		if(!band){
			bi.pb(i);
		}
	}
    int t; cin>>t; 
    while(t--){
			solve();
	}
    return 0;
}
