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

const int mod = 1e4;
void solve(){
	int n, a, p; cin>>n>>a>>p;
	vector<int> b(n+1, 0);
	fore(i, 1, a+1){
		int a1, a2; cin>>a1>>a2; 
		int x = 1; 
		fore(j, a1-1, a2){
			b[j] += x % mod; 
			x++;
		}
		
	}

	fore(i, 2, n){
		b[i] += b[i-1] % mod;
	}
	fore(i, 0, p){
		int p1, p2; cin>>p1>>p2;
		cout<<b[p2-1] - b[p1-2]<<"\n";
	}
	//cout<<endl;
	//fore(i, 0, n)cout<<b[i]<<" ";
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
