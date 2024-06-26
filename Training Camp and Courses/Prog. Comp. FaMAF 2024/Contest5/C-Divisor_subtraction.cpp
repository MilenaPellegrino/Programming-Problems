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
/*
int cr[MAXN]; // -1 if prime, some not trivial divisor if not
void init_sieve(){
	memset(cr,-1,sizeof(cr));
	fore(i,2,MAXN)if(cr[i]<0)for(ll j=1LL*i*i;j<MAXN;j+=i)cr[j]=i;
}
*/
ll min_pr(ll n){
    for (ll i = 2; i * i <= n; i++){
        if (n % i == 0){
            return i;
        }
    }
    return n;   // mod devolvemos el mismo si es primo
}
void solve(){
	ll n; cin>>n; 
    ll sub_aux = 0; 
   // ll MAXN = n+1;
    //ll cr[n];
    //vll cr(MAXN, -1);
    //memset(cr,-1,sizeof(cr));
   // fore(i, 0, n) {
    //    cr[i] = -1;
    //}
    //fore(i,2,MAXN)if(cr[i]<0)for(ll j=1LL*i*i;j<MAXN;j+=i)cr[j]=i;
    /*fore(i, 2, MAXN) {
        if (cr[i] < 0) {
            for (ll j = i * i; j < MAXN; j += i) {
                if (cr[j] == -1) {
                    cr[j] = i;
                }
            }
        }
    } */
    //cout<<cr<<endl;
/*
    ll aux = n;
    while(aux>0){
        if(cr[aux] == -1){
            subs++;
            break;
        } else{
            aux-= cr[aux];
        }
        subs++;
        //db(aux);
        //db(cr[aux]);
    }
    */
    ll aux = n;
    while(aux%2 != 0 ){
        aux -= min_pr(aux);
        sub_aux++;
    }
    pri(sub_aux + aux / 2);
    return;
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
