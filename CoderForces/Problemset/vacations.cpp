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
ll dp[nmax][3], a[nmax][3]; 

ll f(ll x, ll y){
    if(x == N) return 0; 
    if(dp[x][y] != -1) return dp[x][y];
    return  dp[x][y] = max(f(x+1, (y+1) % 3) + a[x][(y + 1) % 3], f(x+1, (y+2) % 3) + a[x][(y + 2) % 3]);
}
int main(){
    FIN; 
    cin>>N; 
    fore(i, 0, N){
        fore(j, 0, 3){
            cin>>a[i][j];
        }
    }
    memset(dp, -1, sizeof dp);
    ll res = max({f(0, 0), f(0,1), f(0, 2)});
    pri(res);
    return 0;
}