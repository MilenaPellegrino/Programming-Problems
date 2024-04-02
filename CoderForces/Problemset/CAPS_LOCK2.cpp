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


string altM(const string& entrada) {
    string resultado;

    for (char caracter : entrada) {
        if (islower(caracter)) {
            resultado += toupper(caracter);
        } else if (isupper(caracter)) {
            resultado += tolower(caracter);
        } else {
            resultado += caracter; // Mantener caracteres no alfabéticos sin cambios
        }
    }

    return resultado;
}

int main(){
    FIN; 
    string word; cin>>word;
    string res; 
    if(islower(word[0])){
        res = altM(word);
    } else { 
        res = word;
    }
    cout<<res;
    return 0;
}