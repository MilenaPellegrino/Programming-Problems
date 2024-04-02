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
	int n, q; cin>>n>>q;
	//pair<int, int> c; 
	int cont = -1; 
	int pos = -1;
	vector<int> a(n); vector<int> b(n);
	fore(i, 0, n)cin>>a[i];
	fore(i, 0, n)cin>>b[i];
	fore(i, 0, n){
		if(a[i] <= q){
			if(cont <= b[i]){
				cont = b[i];
				pos = i;
			}
			
		}
		q--;
	}
	if(pos == -1)pri(pos);
	else pri(pos+1);
}
 
int main(){
    FIN; 
    int t; cin>>t; 
    while(t--){
		solve();
	}
    return 0;
}
