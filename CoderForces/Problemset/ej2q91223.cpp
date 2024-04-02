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

int main(){
    FIN; 
    int t; cin>>t; 
    while(t--){
        int n, k; cin>>n>>k; 
        if( k ==0 ){
            for(int i =n; i>0; i--){
                cout<<i<<" ";
            }
            cout<<"\n";
        } else if ((n-k) == 1){
            fore(i, 1, n+1){
                cout<<i<<" ";
            }
            cout<<"\n";
        } else { 
            //  8 4 
            // 1 2 3 4 8 7 6 5
            fore(i, 1, k+1){
                cout<<i<<" ";
            }
            for(int i =n; i>k; i--){
                cout<<i<<" ";
            }
            cout<<"\n";            
        }
    }
    return 0;
}