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
    int t; cin>>t;
    //int aux = t; 
    int rest[t];
    fore(i, 0, t){
        int n, m; cin>>n>>m; 
        int res; 
        res = n * m; 
        res /= min(n, m);
        rest[i] = res; 
        res = 0;
    }
    fore(i, 0, t){
        cout<<rest[i]<<'\n';
    }
    return 0;
}