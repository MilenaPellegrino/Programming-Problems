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
	int a1 = 1; 
	int res1 = 0; 
	for(int i = 1; n>=a1; i++){
		a1 = 1<<i;
		res1 = 1<<(i-1);
		//DBG(a); DBG(res);
	}
	int a2 = 1; 
	int res2 = 0; 
	for(int i = 1; n>=a2; i++){
		a2 = 3<<i;
		res2 = 3<<(i-1);
		//DBG(a); DBG(res);
	}
	pri(min((n-res1+1),(n-res2+1)));
	
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
