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
	ll n; cin>>n;
	ll cont = 0;
	ll res = 0;
	for(ll i = 1; i<gcd(n, n); i++){
		// Es divisible 
		if(n % i == 0)cont++;
		else{
			res = max(cont, res);
			cont = 0; 
		}
	}
	pri(res);
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
