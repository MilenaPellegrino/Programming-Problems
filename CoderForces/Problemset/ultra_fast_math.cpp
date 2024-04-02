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
    int a; cin>>a;
    int b; cin>>b; 
    int res[101];
    int i =0;
    int si = 0;
    
    while(a>0){
        int diga = a % 10;
        int digb = b % 10; 
        DBG(a);
        DBG(b);
        DBG(diga);
        DBG(digb);
        if(diga == digb){
            res[i] = 0;
        }else {
            res [i] = 1;
        }
        DBG(i);
        DBG(si);
        DBG(res[i]);
        a /=10;
        b /=10;
        i ++;
        si ++; 
    }
    fore(j, 0, si){
        cout<<res[i];
    }
    return 0;
}