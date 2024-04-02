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
    int n; cin>>n;
    if(n==1){
		cout<<1; 
		return 0;
	}
    if(n<= 3){
		cout<<"NO SOLUTION"; 
		return 0;
	}
	if(n==4){
		cout<<2<<" "<<4<<" "<<1<<" "<<3;
		return 0;
	}
    fore(i, 1, n+1){
		if(i%2!=0)cout<<i<<" ";
	}
	fore(i, 1, n+1){
		if(i%2 == 0)cout<<i<<" ";
	}
    return 0;
}
