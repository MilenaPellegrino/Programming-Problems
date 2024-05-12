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

const ll MAXN = 1e6 + 5;
bool dp[MAXN];

void solve(){
    ll w, f; cin>>w>>f;
    ll n; cin>>n;
    mset(dp, false);
    dp[0] = true;

    ll sum = 0;
    fore(i, 1, n+1){
        ll x; cin>>x;
        sum+=x;
        for(int j = MAXN - 1; j >= x; j--) dp[j] |= dp[j - x];
    } 
    ll ans = 1e9;
    //cout<<sum<<endl;
    fore(i, 0, MAXN){
        if(dp[i]){
            ll c1 = max((i + w - 1)/w, (sum - i + f - 1)/f);
            ll c2 = max((i + f - 1)/f, (sum - i + w - 1)/w); 
            //db(c1); db(c2);
            ll temp = min(c1, c2);
            // db(temp);
            ans = min(ans,temp);
        }
    }
	pri(ans);
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
