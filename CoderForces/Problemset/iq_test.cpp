#include<bits/stdc++.h>
#define pb push_back
#define fst first
#define snd second
#define str string
#define fore(i,a,b) for(int i=a,ggdem=b;i<ggdem;++i)
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
typedef long long ll;
using namespace std; 
// ADEVERTENCIA UN ASCO EL CODIGO PERO FUNCIONA LOCO 
bool isPair(int n){
    if(n %2 ==0){
        return true;
    } 
    return false; 
}
int main(){
    FIN; 
    int n; 
    cin>>n;
    int num[n];
    int pairs = 0; 
    int odds = 0; 
    int res; 
    fore(i, 0, n){
        cin>>num[i];
    } 
    fore(i, 0, n){
        if(isPair(num[i])){
            pairs ++;
        } else{ odds ++;}
    }
    if(pairs == 1){
        fore(i, 0, n){
            if(isPair(num[i])){
                res = i; 
                break; 
            }
        }
    } 
    if(odds == 1){
        fore(i, 0, n){
            if(isPair(num[i]) == false){
                res = i; 
                break; 
            }
        }
    } 
    cout<<res + 1;

    return 0;
}