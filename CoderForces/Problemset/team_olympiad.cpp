#include<bits/stdc++.h>
using namespace std; 
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
#define VI vector<int>
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
typedef long long ll;



void solve(){
	int n; cin>>n; 
	VI o, tw, th; 
	fore(i, 1, n+1){
		int t; cin>>t;
		if(t== 1) o.pb(i);
		else if (t == 2) tw.pb(i);
		else th.pb(i);			
	}
	int mins = min({SZ(o), SZ(tw), SZ(th)});
	pri(mins);
	fore(i, 0, mins){
		cout<<o[i]<<" "<<tw[i]<<" "<<th[i]<<"\n";
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
