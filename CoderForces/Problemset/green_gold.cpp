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
	vector<int> b(n);
	fore(i, 0, n) cin>>a[i]; 
	fore(i, 0, n){
		b[i] = a[i] - i;
	}
	fore(i, 0, n){
		cout<<a[i] - b[i] + 1<<" ";
	}
	cout<<"\n";
	/*fore(i, 0, n){
		cout<<a[i] - (a[i] - i)<<" ";
	}
	cout<<"\n";*/
}
 
int main(){
    FIN; 
    //int t = 1;
    int t; cin>>t; 
    while(t--){
			solve();
	}
    return 0;
}
