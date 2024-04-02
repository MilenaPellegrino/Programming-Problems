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

vector<ll> obtMult(ll a, ll b){
    vector<ll> res; 
    fore(i, 1, a+1){
        if(i%b == 0){
            res.pb(i);
        }
    }
    return res; 
}

vector<ll> uni(const std::vector<ll>& v1, const std::vector<ll>& v2){
    vector<ll> res; 
    res.insert(res.end(), ALL(v1));
    res.insert(res.end(), ALL(v2)); 
    // Ordeno el vector 
    sort(ALL(res)); 
    res.erase(unique(ALL(res)), res.end());
    return res; 
}

int main(){
    FIN; 
    int k, l, m, n; 
    ll d;
    ll resu = 0; 
    cin>>k>>l>>m>>n;
    cin>>d;
    vector<ll> vk = obtMult(d, k);
    vector<ll> vl = obtMult(d, l);
    vector<ll> vm = obtMult(d, m);
    vector<ll> vn = obtMult(d, n);
    
    vector<ll> res  = vk; 
    res = uni(res, vl);
    res = uni(res, vm); 
    res = uni(res, vn);
    resu = SZ(res);
    cout<<resu;
    return 0;
}