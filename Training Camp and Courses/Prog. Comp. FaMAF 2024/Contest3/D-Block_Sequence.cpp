#include<bits/stdc++.h>
using namespace std;
#define fore(i,a,b) for(int i=(a);i<(b);i++)
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
def solve():
    n = int(input())
    a = [int(x) for x in input().split()]
    dp = [n + 1] * n

    def get(pos):
        if pos > n:
            return n + 1
        if pos == n:
            return 0
        return dp[pos]

    dp[-1] = 1
    for i in range(n - 2, -1, -1):
        dp[i] = min(dp[i + 1] + 1, get(i + a[i] + 1))
    print(dp[0])


for _ in range(int(input())):
    solve()
    
void solve(){
	ll n; cin>>n; 
	vll a(n); fore(i, 0, n)cin>>a[i];
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


    for(int i=n-1;i>=0;i--){
        for(int s=0;s<3;s++){
            if(s == 0){
                dp[i][s] = max(dp[i+1][0], max(arr1[i]+dp[i+1][2], arr2[i]+dp[i+1][1]));
            }else if(s == 1){
                dp[i][s] = max(dp[i+1][0], arr1[i]+dp[i+1][2]);
            }else{
                dp[i][s] = max(dp[i+1][0], arr2[i]+dp[i+1][1]);
            }
        }
    }
