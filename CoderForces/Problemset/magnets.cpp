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
    FIN; 
    int n; cin>>n; 
    int ans = 1;
    int g = 2; 
    fore(i, 0, n){
        int a; cin>>a; // 10 0 | 10 1 | 01 0 | 01 1 
        if (a == 10 && g== 1){
            ans ++;
        } else if ( a == 01  && g == 0){
            ans ++; 
        }
        if(a == 10)g=0; 
        if(a == 01)g=1;
    }
    pri(ans);
    return 0;
}