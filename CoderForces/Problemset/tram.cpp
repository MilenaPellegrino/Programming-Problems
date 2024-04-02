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
#define ii pair<int, int>
typedef long long ll;
using namespace std; 

int main(){
    FIN; 
    int n; cin>>n;
    int rmax = 0;  // 
    int pas = 0; // 6
    fore(i, 0, n){
       int a, b; cin>>a>>b; 
       pas = pas - a;
       pas += b; 
       rmax = max(rmax, pas);
    } 
    pri(rmax);
    return 0;
}