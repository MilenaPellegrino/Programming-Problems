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
    int n, x; cin>>n>>x; 
    map<int, int> p; 
    fore(i, 1, n+1){
		int v; cin>>v; 
		if(p.find(x-v) != p.end()){
			cout<<i<<" "<<p[x-v]<<"\n";
			return 0;
		}
		p[v] = i;
	}
	cout<<"IMPOSSIBLE"<<"\n";
    return 0;
}
