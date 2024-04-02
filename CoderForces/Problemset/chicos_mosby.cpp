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
#define mset(a,v) memset((a),(v),sizeof(a))
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
typedef long long ll;
using namespace std; 
const int MAXN = 1e6 + 10;
int dp[MAXN][MAXN] = {{-1}};
int f(int n, int m){
	if(n <= 0 || m <= 0) return 1;
	if(dp[n][m] != -1) return dp[n][m]; 
	return dp[n][m] = f(abs(n-m), min(n, m)) + 1;
}
void solve(){
	int n, m;  cin>>n>>m;
	int res = f(n, m);
	pri(res - 1);
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
