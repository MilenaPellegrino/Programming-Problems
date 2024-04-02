#include<bits/stdc++.h>
#define pb push_back
#define fst first
#define snd second
#define str string
#define fore(i,a,b) for(int i=(a);i<(b);i++)
#define DBG(x) cout<<#x<< " = "<<(x)<<endl
#define ALL(x) (x).begin(),(x).end()
#define SZ(x) ((int)x.size())
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
typedef long long ll;
using namespace std; 

int d(int a, int b){
	int r = (a + b - 1)/ b;
	return r;
}
void solve(){
    int n; cin>>n; 
    vector<int> a(n); fore(i, 0, n) cin>>a[i];
    fore(i, 0, d(n,2) + 1){
		string r = string(a[i], 'a');
		if(i == d(n,2)) cout<<r<<"\n";
		cout<<r<<"\n";
	}
	fore(i, d(n, 2)+1, n){
		string r = string(a[i], 'a');
		cout<<r<<"\n";
	}
}
int main(){
    FIN; 
    int t; cin>>t; 
    while(t--){
        solve();
    }
    return 0;
}
