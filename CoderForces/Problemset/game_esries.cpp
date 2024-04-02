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
    int a, p; 
    int a1, a2, p1, p2; cin>>a1>>p1>>a2>>p2; 
    a = a1 + a2;
    p = p1 + p2; 
    if(a > p){
		cout<<"A"; 
	} else if (p>a){
		cout<<"P";
	} else {
		cout<<"D";
	}
    
    return 0;
}
