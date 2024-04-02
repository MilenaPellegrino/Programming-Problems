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
	int p, c, g; cin>>p>>c>>g; 
	int cnt = g;  
	p -=g; 
	if(c>1)cnt+= (c + 2 - 1) / 2;
	else if (c>0) cnt+=1; 
	if(c % 2 != 0 && c!=0)p-=2;
	if(p>4)cnt+=(p+4-1)/4;
	else if (p>0) cnt++;
	pri(cnt);
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
