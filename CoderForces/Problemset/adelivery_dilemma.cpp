#include<bits/stdc++.h>
#define pb push_back
#define fst first
#define snd second
#define str string
#define fore(i,a,b) for(int i=(a);i<(b);i++)
#define forl(i, a, b) fore(ll = (a); i<(b); i++);
#define DBG(x) cout<<#x<< " = "<<(x)<<endl
#define prnt(x) cout << (x) << "\n"
#define ALL(x) (x).begin(),(x).end()
#define SZ(x) ((int)x.size())
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
typedef long long ll;
using namespace std; 

void solve(){
    ll n; cin>>n;
    vector<ll> a(n);
    vector<ll> b(n);
    ll x = 0;
    forl(i, 0, n)cin>> a[i];
    forl(i, 0, n){
        cin>>b[i];
        x+= b[i];
    }
    ll ans = INT_MAX;
    
}
int main(){
    FIN; 
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}