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

const ll MAXN = 110; 
const ll MAXW = 100005;

ll N, W; 
ll dp[MAXN][MAXW];
ll p[MAXN]; 
ll v[MAXN];
//mempset(dp, -1, sizeof(dp));
ll f(ll n, ll w){
	if(n==N)return 0;
	if(dp[n][w]>=0)return dp[n][w];
	if(p[n]>w)return f(n+1,w);
	return dp[n][w]= max(f(n+1,w), f(n+1,w-p[n]) +v[n]);
}

int main(){
    FIN; 
    cin>>N>>W; // N = 3, W = 8
    fore(i, 0, N )cin>>p[i]>>v[i]; // p = {3, 4, 5} | V = {30, 50, 60} |
    memset(dp, -1, sizeof(dp));
    ll res = f(0, W);
    pri(res);
    return 0;
}