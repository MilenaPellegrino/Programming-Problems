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

const ll nmax = 10e5 +10;
ll k;
ll h[nmax];
ll dp[nmax];

ll f(ll n){
    if(n == 0)return 0; 
    if(n<0)return 110;
    if(dp[n]!= -1)return dp[n];
    dp[n] = 110;
    fore(i, 1, k+1){
        dp[n] = min(dp[n], abs(h[n]-h[n-i]) + f(n-i));
    }
    return dp[n];
}
int main(){
    FIN; 
    ll N; cin>>N>>k; 
    fore(i, 0, N)cin>>h[i];
    memset(dp, -1, sizeof dp);
    ll res = f(N-1);
    pri(res);
    return 0;
}