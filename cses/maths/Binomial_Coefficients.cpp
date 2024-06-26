#include<bits/stdc++.h>
using namespace std;
#define fore(i,a,b) for(int i=(a);i<(b);i++)
#define rof(i, a, b) for(int i=(b);i>(a);i--)
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
using ii = pair<ll,ll>;
using vii = vector<int>;
using vll = vector<ll>;
using vpi = vector<pii>;
using vvll = vector<vector<ll>>;
template<class T>ostream&operator<<(ostream&o,vector<T>const&v){o<<"[ ";for(auto const&x:v)o<<x<<" ";return o<<"]";}

const ll MAXN=1e6+5;
const ll MOD =1e9+7;

ll fc[MAXN],fci[MAXN];

int mul(ll a, ll b){
	return a*b%MOD;
}
ll binpow(ll a, ll b){ // iterativa (mas rapida)
	ll res=1;
	while(b>0){
		if(b%2==1){
			res=(res*a)%MOD;
		}
		a=(a*a)%MOD,b/=2;
	}
	return res;
}
void factoriales(){
	fc[0]=1;
	fore(i,1,MAXN)fc[i]=mul(fc[i-1],i);
	fci[MAXN-1]=binpow(fc[MAXN-1],MOD-2);
	for(ll i=MAXN-2;i>=0;i--)fci[i]=mul(fci[i+1],i+1);
}

ll comb(ll n, ll k){
	return mul(fc[n],mul(fci[k],fci[n-k]));
}

void solve(){
	ll a, b; cin>>a>>b;
    ll res = comb(a, b);
    pri(res);
}
 
int main(){
    FIN; 
	 factoriales();
    //int t = 1;
    int t; cin>>t; 
    while(t--){
		solve();
	}
    return 0;
}
