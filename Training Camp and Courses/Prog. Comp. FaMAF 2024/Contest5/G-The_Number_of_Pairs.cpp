// NRPM 
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
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll, ll> ii;
typedef vector<ii> vii;
typedef tuple<ll, ll, ll> iii;
template<class T>ostream&operator<<(ostream&o,vector<T>const&v){o<<"[ ";for(auto const&x:v)o<<x<<" ";return o<<"]";}

const ll MAXN = 2e7 + 10;

// spf = factor primo mas chico de cada num 
// primes = conteo de factores primos 
ll spf[MAXN], primes[MAXN];

// criba 
void init_sieve(){
    spf[1] = 1;  // 1 no tiene factor primo
    fore(i, 2, MAXN) spf[i] = i;  
    for(int i=2; i*i<MAXN; i++){
        if (spf[i] == i){
            for(int j=i*i; j<MAXN; j += i) if(spf[j]==j) spf[j] = i;
        }
    }
    fore(i, 2, MAXN){
        if(spf[i] == i) primes[i] = 1;
        else{
            primes[i] = primes[i / spf[i]] + (i / spf[i] % spf[i] != 0);
        }
    }
}

// a<<b = a * 2^b 
void solve(){
    ll c, d, x;
    ll ans = 0;
    cin>>c>>d>>x;
    // iteramos hasta la raiz de x 
    for(int i = 1 ; i * i <= x ; i++){
        // x divisior de i y x / i + d  divisible por c.
         if(x % i == 0 && (x / i + d) % c == 0){
            ans += (1ll << primes[(x / i + d) / c]);
         }
            // ev. dup. 
         if(x % i == 0 && x / i != i && (x / (x / i) + d) % c == 0){
            ans  += (1ll << primes[(x / (x / i) + d) / c]);
         }
    }
    pri(ans);
}

int main(){
    FIN; 
    //int t = 1;
    int t; cin>>t; 
    init_sieve();

    while(t--){
		solve();
	}
    return 0;
}
