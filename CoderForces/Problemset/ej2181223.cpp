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
    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s; // s = 011
    int ans=0; // ans = 1 
    int zero=0; // zero = 0
    int odd=0; // odd = 1
    for(auto it:s){
        if(it=='0'){
        zero++;
        }else{
        odd++;
    }
}
int len=s.size(); // len = 3
int i=0; // i= 3
for(auto it:s){
    i++;
    if(it=='0'){
        if(odd==0){
            //zero--;
            ans+=len-i+1;
            break;
        }
       else{ odd--;}
    }
    else{
        if(zero<=0){
            //odd--;
            ans+=len-i+1;
            break;
        }
        else{
            zero--;
        }
    }
}
cout<<ans<<endl;
    }
return 0;
}