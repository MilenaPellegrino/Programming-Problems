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
	int c; cin>>c; 
	vector<int> a(c);
	a[0] = 0;
	fore(i, 1, c+1){
		int ci; cin>>ci; 
		a[i] += ci + a[i-1];
	}
	int r = 100; 
	auto it = max_element(ALL(a));
	if(*it > 0){
		pri(r + *it);
	} else {
		pri(r);
	}
	//fore(i, 0, c+1)cout<<a[i]<<" ";
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
