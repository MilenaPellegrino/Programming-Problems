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
	int q, n; cin>>q>>n; 
	vector<int> a(n);
	int aa; cin>>aa;
	a[0] = aa;
	fore(i, 1, n){
		int ai; cin>>ai; 
		a[i] += a[i-1] + ai;
	}
	fore(i, 0, q){
		int g; cin>>g; 
		auto it = upper_bound(ALL(a), g);
		if(it != a.begin()){
			it--;
			int pos = distance(a.begin(), it);
			cout<<pos+1<<" "<<g-*it<<"\n";
		}
	}
	//fore(i, 0,n)cout<<a[i]<<" ";
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
