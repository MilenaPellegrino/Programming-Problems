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
	if ( n <= 1399){
		cout<<"Division 4"<<"\n";
	} else if (n<= 1599 && n>= 1400)
	{
		cout<<"Division 3"<<"\n";
	} else if (n<= 1899 && n>= 1600)
	{
		cout<<"Division 2"<<"\n";
	} else{
		cout<<"Division 1"<<"\n";
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
