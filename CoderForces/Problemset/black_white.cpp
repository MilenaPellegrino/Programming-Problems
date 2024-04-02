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

 
int main(){
    FIN; 
    int n; cin>>n; 
    int res = 0; 
    int cont = 0 ;
    fore(i, 0, n){
		fore(j, 0, n){
			char c; cin>>c; 
			if(c == 'N'){
				cont ++;
			} else {
				cont = 0;
			}
			if(cont == 2){
				res ++;
				cont =0;
			} 
		}
		cont = 0;
	}
	pri(res);
    return 0;
}
