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

int f(char c){
	int res = c - 'a' + 1;
	return res;
}
void solve(){
	int n, q; cin>>n>>q; 
	string s; cin>>s; 
	vector<int> nums(n); 
	fore(i, 0, n){
		nums[i] = f((s[i]));
	}
	vector<int> ps(n+1);
	ps[0] = 0;
	fore(i, 1, n+1){
		ps[i] = ps[i-1] + nums[i-1];
	}
	int l = 0, r = 0; 
	while(q--){
		cin>>l>>r;
		pri(ps[r] - ps[l-1]);
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
