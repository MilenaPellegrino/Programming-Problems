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

int main(){
    FIN; 
    int n; cin>>n; 
    int prob[n]; 
    int res = 1;
    fore(i, 0, n){
        cin>>prob[i];
    }
    sort(prob, prob + n);
    int j= 1;
    fore(i, 1, n){
        if(prob[i] >= j+1){
            j++;
            res ++;
        }
    }
    cout<<res;
    return 0;
}