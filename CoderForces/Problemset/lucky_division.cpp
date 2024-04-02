#include<bits/stdc++.h>
#define pb push_back
#define fst first
#define snd second
#define str string
#define fore(i,a,b) for(int i=(a);i<(b);i++)
#define DBG(x) cout<<#x<< " = "<<(x)<<endl
#define pri(x) cout << (x) << "\n"
#define ALL(x) (x).begin(),(x).end()
#define SZ(x) ((int)x.size())
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
typedef long long ll;
using namespace std; 

int main(){
    FIN;
    int n; cin>>n;
    vector<int> lm = {4, 7, 44, 47, 74, 444, 447, 474, 477, 747, 777}; 
    int ans = 0;
    fore(i, 0, SZ(lm)){
        if((n % lm[i]) == 0 ){
            ans ++;
        } 
    }
    if(ans > 0){
        cout<<"YES";
    } else {
        cout<<"NO";
    }
    return 0;
}