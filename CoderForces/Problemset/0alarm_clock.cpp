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
    ll res = 0;
    ll a, b, c, d; cin>>a>>b>>c>>d; 
    if(b>= a){
        res = b; 
    } else if( c- d <= 0){
        res = -1;
    } else {
        res = b +(c * ceil((a-b) / (c-d))) ;
    }
    cout<<res<<'\n'; 
}
int main(){
    FIN; 
    ll t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}