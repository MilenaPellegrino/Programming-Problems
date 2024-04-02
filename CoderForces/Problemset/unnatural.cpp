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

bool esVocal(char c){
    if(c == 'a' || c == 'e'){
        return true;
    } else {
        return false; 
    }
}


void solve(){
    ll n; cin>>n;
    string res;
    string resu;
    string a;
    cin>>a;
    if(n == 3){
        resu = a;
    }
    res += a[0]; res += a[1];
    fore(i, 2, n){
        if(n==3){
            break;
        }
        if(esVocal(a[i])){
            if(i+2 <= n && !esVocal(a[i+2])){
                res += a[i]; res +=a[i+1]; 
                //res+= '.';
                i++;
            }else{
                res+= a[i]; 
                res += '.';
            }
        }else{
            if(esVocal(a[i+1])){
                    res += '.';
                res+= a[i];
            } else {
                res+= a[i];
                res += '.';
            }
        }
    }
    char ult = '\0';  
    for (char c : res) {
        if(n==3){
            break;
        }
        if (c != '.' || c != ult) {
            resu += c;
            ult = c;
        }
    }
    if(resu[SZ(resu) -1] == '.'){
        cout<<resu.substr(0, resu.size() - 1)<<"\n";
    }else{
        cout<<resu<<"\n";
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