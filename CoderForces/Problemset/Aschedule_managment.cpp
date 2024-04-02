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
    int n, m; cin>>n>>m; //n = 2 m = 4
    vector<int> a(m);   // a = {0, 1, 0, 1}
    fore(i, 0, m){
        cin>>a[i];
        a[i]--;
    }
    vector<int> cnt(n); // cnt = {2, 2}
    fore(i, 0, m){
        cnt[a[i]]++;
    }

    bool check(int t){ // t = 4
        ll fr = 0, nd = 0; // fr =2, nd = 0 
        fore(i, 0, n){
            if(t>= cnt[i]){ // 4>= 2
                fr += (t-cnt[i]) / 2; 
            } else {
                nd += cnt[i] - t;
            }
        }
        return nd <= fr;
    }; // check = true 
    int l = 0;
    int r = 2 * m;
    int res = -1;
    while(l<=r){
        int me = (l+r) / 2;
        if(check(me)){
            res = me;
            r = me - 1;
        } else {
            l = me +1;
        }
    }
    cout<<res<<"\n";

}
int main(){
    FIN; 
    int t; cin>>t; 
    while(t--){
        solve();
    }
    return 0;
}