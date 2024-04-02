#include<bits/stdc++.h>
#define pb push_back
#define fst first
#define snd second
#define str string
#define fore(i,a,b) for(int i=(a);i<(b);i++)
#define DBG(x) cout<<#x<< " = "<<(x)<<endl
#define ALL(x) (x).begin(),(x).end()
#define SZ(x) ((int)x.size())
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
typedef long long ll;
using namespace std; 

int cnum(char c){
    return c- 'a' + 1;
}

char numc(int n){
    if(n == 1){
        return 'A';
    } else if(n==2){
        return 'B';
    } else{
        return 'C';
    }
}
void solve(){
    int f1 = 0, f2 =0, f3=0;
    fore(i, 0, 3){
        char a, b, c; 
        cin>>a>>b>>c;
        a = tolower(a);
        b = tolower(b);
        c = tolower(c);
        if(a != '?'){
            f1+= cnum(a); 
        }
        if (b != '?'){
            f2 += cnum(b); 
        } 
        if (c != '?'){
            f3 += cnum(c);
        }
    }
        if(f1 != 6){
            cout<<numc(6-f1)<<"\n";
        } else if (f2!=6){
            cout<<numc(6-f2)<<"\n";
        } else if(f3 !=6){
            cout<<numc(6-f3)<<"\n";
        }    
}
int main(){
    FIN; 
    int t; cin>>t; 
    while(t--){
         solve();
     }
    return 0;
}