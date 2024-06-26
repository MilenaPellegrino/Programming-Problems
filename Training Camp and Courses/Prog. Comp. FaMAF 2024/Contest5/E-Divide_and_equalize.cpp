#include<bits/stdc++.h>
using namespace std;
#define fore(i,a,b) for(ll i=(a);i<(b);i++)
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

//vector<pair<ll, ll>> res; 

/*void fact_prime(ll n){
    for(ll i = 2; i * i <= n; i++) {
        //if (n % i == 0) {
            res.pb({i, 0});
            while (n % i == 0) {
                n /= i;
                res.back().snd++;
            }
        //}
    }
    if (n > 1) {
        res.pb({n, 1});
    }
}*/
map<ll, ll> res;
void fact_prime(ll n){
    for (int i = 2; i*i <= n; i++) {
        while (n%i == 0) {
            res[i]++;
            n /= i;
        }
    }
    if (n > 1) res[n]++;
}

void solve(){
	ll n; cin>>n; 
    vll a(n); fore(i, 0, n)cin>>a[i];
    res.clear();
    fore(i, 0, n) fact_prime(a[i]);
   //fore(i, 0, sz(res)){
        //cout<<res[i].fst<<" "<<res[i].snd<<"  ";
   //} 
  for (auto elem : res){
        if(elem.snd % n !=0){
            cout<<"NO\n";
            return;
        }
  }
  cout<<"YES\n";
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
