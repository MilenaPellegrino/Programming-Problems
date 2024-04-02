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

void solve(){
	int n; cin>>n; 
	vector<int>  a(n+1);
	fore(i, 0, n)cin>>a[i];
	a.pb(0);
	int k; cin>>k;
	int sump = 0; 
	fore(j, 0, k)sump+=a[j];
	int res = sump; 
	fore(i, 1, n-k+1){
		sump = sump - a[i-1] +a[i+k-1];
		res = max(res, sump);
	}
	pri(res);
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
