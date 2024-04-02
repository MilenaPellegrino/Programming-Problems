#include<bits/stdc++.h>
#define pb push_back
#define fst first
#define snd second
#define str string
#define fore(i,a,b) for(int i=(a);i<(b);i++)
#define DBG(x) cout<<#x<< " = "<<(x)<<endl
#define ALL(x) (x).begin(),(x).end()
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
typedef long long ll;
using namespace std; 

int main(){
    FIN; 
    int n; cin>>n;
    int cont = 1; 
    string res;
    if(n==1){
        cout<<"I hate it";
    } else {
        res += " I hate that";
        for(int i=n-1; i>0; i--){
        if(i>1 && i%2 == 0){
            res += " I love that";
            cont++;
        } else if (i > 1 && i%2 != 0){
            res+= "I hate that";
            cont ++;
        }
        if(i == 1 && cont %2 == 0){
            res += " I hate it";
        } 
        if(i == 1 && cont %2 != 0){
            res += " I love it";
        } 
    }
    }

    cout<<res;
    return 0;
}