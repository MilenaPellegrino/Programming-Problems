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

int solve(){
    string p; cin>>p; 
    int res = 0; 
    if (p == "Tetrahedron") {
        res += 4;
    } else if (p == "Cube") {
        res += 6;
    }else if (p == "Octahedron") {
        res += 8;
    }else if (p == "Dodecahedron") {
        res += 12;
    } else {
        res += 20;
    }
    return res; 
}
int main(){
    FIN; 
    int t; cin>>t; 
    int res = 0;
    while(t--){
        res += solve();
    }
    cout<<res<<'\n';
    return 0;
}