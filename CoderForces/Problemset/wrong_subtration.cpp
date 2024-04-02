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
	int n, k; cin>>n>>k; 
	ll res = n; 
	fore(i, 0, k){
		if(res % 10 == 0){
			res  /= 10;
		} else {
			 res --;
		}
	}
	pri(res);
}
 
int main(){
    FIN; 
    int t = 1;
    // int t; cin>>t; 
    while(t--){
			solve();
	}
    return 0;
}
