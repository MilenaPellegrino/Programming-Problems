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
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
typedef long long ll;
using namespace std; 

int main(){
    FIN; int equals = 0; 
    int a, b, c, d; cin>>a>>b>>c>>d;
   if(a == b){
    equals++; 
   }
    if(a == c){
    equals++; 
   }
    if(a == d){
    equals++; 
   }
    if(b == c){
    equals++; 
   }
    if(b == d){
    equals++; 
   }
    if(c == d){
    equals++; 
   }
   pri(equals);
    return 0;
}