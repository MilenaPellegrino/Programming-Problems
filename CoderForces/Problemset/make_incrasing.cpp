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
	vector<int> a(n);
	fore(i, 0, n)cin>>a[i]; 
	int cont = 0; 
	for(int i = n-2; i>=0; i--){
		while(a[i] >= a[i+1] && a[i]>0){
			a[i] /=2;
			cont++;
		}
		if(a[i] == a[i+1]){
			pri(-1);
			return;
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
