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
ll N;
ll h[nmax];
ll dp[nmax];

ll f(int n){
    if(n == 0)return 0; 
    if(n<0)return nmax;
    if(dp[n]!= -1)return dp[n];
    return dp[n] = min(f(n-1)+abs(h[n-1]-h[n]),f(n-2)+abs(h[n-2]-h[n]));
}
int main(){
    FIN; 
    cin>>N; 
    fore(i, 0, N)cin>>h[i];
    memset(dp, -1, sizeof dp);
    ll res = f(N-1);
    pri(res);
    return 0;
}