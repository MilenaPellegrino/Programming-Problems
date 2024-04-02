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

void solve(){
    int n; cin>>n; 
    ll pair = 0; 
    ll odd = 0;
    int k = 0;
    ll maxs = 0;                                                                                                    
    fore(i, 0, n){
        ll a; cin>>a;
        maxs = max(a, maxs);
        if(a%2 == 0){
            pair++;
            if(a%3 == 0){
                k=4;
            } 
        } else{ 
            odd ++;
        }
    }           
    // Cases for n:      
    if(n == 2){ 
        cout<<maxs<<"\n";
    }                                                                                                 
    if(pair == 0){
        cout<<4<<"\n"; 
    } else if (odd == 0 && k==0){
        cout<<3<<"\n";
    } else if (odd ==0 && k!=0){
        cout<<k<<"\n";
    } else{
        cout<<2<<"\n";
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