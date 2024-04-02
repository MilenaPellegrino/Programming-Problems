#include<bits/stdc++.h>
#define pb push_back
#define fst first
#define snd second
#define str string
#define fore(i,a,b) for(int i=(a);i<(b);i++)
#define DBG(x) cout<<#x<< " = "<<(x)<<endl
#define prnt(x) cout << (x) << "\n"
#define ALL(x) (x).begin(),(x).end()
#define SZ(x) ((int)x.size())
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
typedef long long ll;
using namespace std; 

int main(){
    FIN; 
    string s; 
    string res;
    cin>>s;
    sort(ALL(s));
    fore(i, 0, SZ(s)){
        if(s[i]!= '+'){
            res += s[i];
        }
    }
    string res1; 
    fore(i, 0, SZ(res)){
        res1+= res[i];
        if (i != res.size() - 1) {
            res1 += '+';
        }
    } 
    prnt(res1);
    return 0;
}