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
    vector<int> l(n), r(n), c(n);
    fore(i, 0, n){
        cin>>l[i];
    }
    fore(i, 0, n){
        cin>>r[i];
    }
    fore(i, 0, n){
        cin>>c[i];
    }
    vector<int> sw; 
    vector<pair<int, int>> ev;
    fore(i, 0, n){
        ev.pb({l[i], 0});
        ev.pb({r[i], 1});
    }
    vector<int> cs;
    // sort
    sort(ALL(ev));
    for(auto e : ev){
        if(e.snd == 0){
            cs.pb(e.fst);
        } else {
            sw.pb((e.fst - cs.back()));
            cs.pop_back();
        }
    }
    // sort
    sort(ALL(sw));
    sort(ALL(c), greater<int>());
    int costo = 0; 
    fore(i, 0, n){
        costo += (sw[i] * c[i]);
    }
    cout<<costo<<"\n";

}
int main(){
    FIN; 
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}