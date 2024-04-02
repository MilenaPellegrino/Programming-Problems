#include<bits/stdc++.h>
#define pb push_back
#define fst first
#define snd second
#define str string
#define fore(i,a,b) for(int i=a,ggdem=b;i<ggdem;++i)
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
typedef long long ll;
using namespace std; 

int main(){
    FIN; 
    int n; cin>>n; 
    ll count =0;;
    char ston;
    fore(i, 0, n){
        char s; cin>>s;
        if (s == ston){
            count ++;
        } else{ 
            ston = s;
        }
    }
    cout<<count;
    return 0;
}