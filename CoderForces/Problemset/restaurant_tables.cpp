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
	int n, a, b; cin>>n>>a>>b; 
	int temp = 0;
	int r = 0;
	fore(i, 0, n){
		int ti; cin>>ti; 
		if(ti == 2){
			if(b>0) b--;
			else r+=2;
		} else {
			if(a>0)a--;
			else if(b>0){
				b--; temp++;
			} else if (temp>0){
				temp --; 
			}else {
				r++;
			}
		}
	}
	pri(r);
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
