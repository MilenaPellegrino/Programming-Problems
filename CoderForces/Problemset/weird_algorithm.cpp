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
    vector<int> res; 
    bool band = true; 
    res.pb(n);
    while(band){
		if(n%2 == 0 ){
			n /= 2;
			res.pb(n);
		} else if (n% 2 !=0){
			n *= 3; 
			n += 1; 
			res.pb(n);
		} else if (n == 1){
			band = false;
		}
	}
	fore(i, 0, SZ(res)){
		cout<<res[i]<<" ";
	}
    return 0;
}
