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
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
typedef long long ll;
using namespace std; 
 
void solve(){
		int x; cin>>x; 
		int cont = 0;
		for(int i = 1; i * i <= x; i++){
				if (x%i == 0 )
				{
					cont ++;
					if (i != x/i)
				{
					cont++;
				}
				}
				
		}
		pri(cont);
}
int main(){
    FIN; 
    int t; cin>>t; 
    while(t--){
		solve();
	}
    return 0;
}
