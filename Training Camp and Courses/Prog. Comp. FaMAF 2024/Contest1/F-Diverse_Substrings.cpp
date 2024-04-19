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

ll mins(ll a, ll b){
	if(a<=b) return a;
	else return b;
}
void solve(){
	ll n; cin>>n;
	string s; cin>>s;
	//db(n); db(s);
	ll cont = 0;
	//cout<<typeid(s[1]).name()<<endl;
	//cout<<typeid(int(s[1])).name()<<endl;
	//db(s[0]); db(int(s[0]));
	fore(i, 0, n){
		vector<ll> freq(10);
		ll maxfreq = 0, dif = 0;
		fore(j,i, mins(n, i+100)){	
		//cout<<freq<<endl;
			ll pos = s[j] - '0';
			if(freq[pos] == 0){
				dif++;
			}
			freq[pos]++;
			fore(k, 0, sz(freq)){
				maxfreq = max(maxfreq, freq[k]);
			}
			if(maxfreq<=dif){
				cont++;
			}
		}
	}
	pri(cont);
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
