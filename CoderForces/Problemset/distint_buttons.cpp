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
    int n; cin>>n; // number of special points 
    int r =0, l =0, u = 0, d =0; 
    //pair<int, int> points; 
    fore(i, 0, n){
        int x, y; cin>>x>>y; 
        if(x>0){
            r++; 
        } else if(x < 0){
            l++; 
        }
        if(y>0){
            u++; 
        } else if(y < 0){
            d++; 
        }
    }
    if(r>0 && l>0 &&u>0 && d>0){
        cout<<"NO"<<"\n";
    }else{
        cout<<"YES"<<"\n";
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