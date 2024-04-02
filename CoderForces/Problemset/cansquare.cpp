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

bool exsqrt(ll numero) {
    double raiz = sqrt(numero);
    return raiz == floor(raiz);
}

void solve(){
    ll n; cin>>n; 
    ll sum = 0; 
    fore(i, 0, n){
        int a; cin>>a;
        sum+= a; 
    }
    if(exsqrt(sum)){
        cout<<"YES"<<"\n"; 
    } else{
        cout<<"NO"<<"\n";
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













