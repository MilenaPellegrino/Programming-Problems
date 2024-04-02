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
	vector<int> res;
	if((n/2) % 2 ==0){
		cout<<"YES"<<"\n";
		for(int i= 2; i<=n; i+=2){
			cout<<i<<" ";
		}
		for(int i = 1; i<n- 1; i+=2){
			cout<<i<<" ";
		}
		cout<<((n-1) + n/2)<<"\n";
	}else{
		cout<<"NO"<<"\n";
	}
}
 
int main(){
    FIN; 
    int t; cin>>t; 
    while (t--)
	{
		solve();
	}
    return 0;
}
