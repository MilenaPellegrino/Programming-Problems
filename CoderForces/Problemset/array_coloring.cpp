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
	int pair = 0;
	int odd = 0; 
	fore(i, 0, n){
		int a; cin>>a; 
		if(a%2 == 0){
			pair++;
		} else {
			odd ++; 
		}
	}
	if(odd % 2 == 0){
		cout<<"YES"<<"\n"; 
	}else{
		cout<<"NO"<<"\n";
	}
}
 
int main(){
    FIN; 
    int t; cin>>t; 
    while(t--){
		solve();
	}
    return 0;
}
