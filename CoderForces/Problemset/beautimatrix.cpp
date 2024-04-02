#include<bits/stdc++.h>
#define pb push_back
#define fst first
#define snd second
#define str string
#define fore(i,a,b) for(int i=(a);i<(b);i++)
#define DBG(x) cout<<#x<< " = "<<(x)<<endl
#define prnt(x) cout << (x) << "\n"
#define ALL(x) (x).begin(),(x).end()
#define SZ(x) ((int)x.size())
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
typedef long long ll;
using namespace std; 
int abs(int a){
	if(a<=0){
	   return a * (-1);
	} else { 
	   return a;
	}}
int main(){
    FIN; 
    int row = 0, col = 0;
    int a[5];
    fore(i, 1, 6){   
        int a; cin>>a; 
        if(a == 1){ 
           row = i;
          col = 1; 
 
        } 
    }
        fore(i, 1, 6){   
        int a; cin>>a; 
        if(a == 1){ 
           row = i;
          col = 2; 
 
        } 
    }
        fore(i, 1, 6){   
        int a; cin>>a; 
        if(a == 1){ 
           row = i;
          col = 3; 
 
        } 
    }
        fore(i, 1, 6){   
        int a; cin>>a; 
        if(a == 1){ 
           row = i;
          col = 4; 
 
        } 
    }
        fore(i, 1, 6){   
        int a; cin>>a; 
        if(a == 1){ 
           row = i;
          col = 5; 
 
        } 
    }
    cout<<abs(row - 3) + abs(col - 3);
    return 0;
}

