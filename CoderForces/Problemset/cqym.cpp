#include<bits/stdc++.h>
#define pb push_back
#define fst first
#define snd second
#define str string
#define fore(i,a,b) for(int i=(a);i<(b);i++)
#define DBG(x) cout<<#x<< " = "<<(x)<<endl
#define pri(x) cout << (x) << "\n"
#define ALL(x) (x).begin(),(x).end()
#define SZ(x) ((int)x.size())
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
typedef long long ll;
using namespace std; 
const ll  MAXN = 1e6+10;
const ll MOD = 1e9 + 7;
ll dp[MAXN];

ll fact(ll n){
		if (n < 0) return 0; 
		if(n== 0)return 1;
		if(dp[n]!=-1){
			return dp[n]; 
		} else {
			dp[n] = (n * fact(n-1))%MOD;
			dp[n] = (dp[n] + MOD) % MOD;
		}
		return dp[n];
}

int main(){
    FIN; 
    ll t; cin>>t;
    memset(dp, -1, sizeof dp);	
    while(t--){
		ll n; cin>>n;
		ll res = (fact(2*n-1) * n) %MOD; 
		cout<<res%MOD<<"\n";
	}
    return 0;
}
