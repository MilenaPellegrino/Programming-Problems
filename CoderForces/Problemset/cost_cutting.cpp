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
	vector<int> a(3); 
	fore(i, 0, 3){
		int ai; cin>>ai; 
		a[i] = ai;
	}
	sort(ALL(a));
	pri(a[1]);
}
     
 int main(){
  FIN; 
  //int t = 1;
  int t; cin>>t; 
  int tempt = t;
   while(t--){
	   cout<<"Case "<<abs(tempt - t)<<": ";
    	solve();
    }
   return 0;
}
