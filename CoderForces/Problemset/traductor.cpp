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
	int d, w; cin>>d>>w; 
	map<int, int> m;
	fore(i, 0, d){
		int a, b; cin>>a>>b; 
		m[a] = b;
	}
	fore(i, 0, w){
		int c; cin>>c; 
		auto it = m.find(c);
		if(it!= m.end()){
			pri(it->snd);
		} else {
			cout<<"C?"<<"\n";
		}
	}
	
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
