#include<bits/stdc++.h>
#include<string>
#define pb push_back
#define fst first
#define snd second
#define str string
#define fore(i,a,b) for(int i=(a);i<(b);i++)
#define DBG(x) cout<<#x<< " = "<<(x)<<endl
#define ALL(x) (x).begin(),(x).end()
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
typedef long long ll;
using namespace std; 

string eliminarPrimerCaracter(const string& cadena) {
    // Verificar si la cadena tiene al menos un carácter
    if (!cadena.empty()) {
        // Devolver la cadena sin el primer carácter
        return cadena.substr(1);
    } else {
        // Devolver una cadena vacía si la cadena está vacía
        return "";
    }
}
char obtenerPrimerCaracter(const string& cadena) {
    // Verificar si la cadena no está vacía
    if (!cadena.empty()) {
        // Devolver el primer carácter
        return cadena[0];
    } else {
        // Devolver un carácter nulo ('\0') si la cadena está vacía
        return '\0';
    }
}

int main(){
    FIN; 
    int t; cin>>t; pair<int, int> res[t]; 
    int aux = t;
    while(t--){
        int n; cin>>n;
        string num = to_string(n);
        string part1;
        string part2; 
        part1 += num[0];
        part2 = eliminarPrimerCaracter(num);
        //DBG(part1); DBG(part2);
        fore(i, 1, num.length()){
            if(num[i] == '0'){
                part1 += '0';
                part2 = eliminarPrimerCaracter(part2);
            } else{ 
                int parte1 = stoi(part1);
                int parte2 = stoi(part2);
                if (parte1  < parte2){
                    res[t].first = parte1; 
                    res[t].second = parte2;
                    break;
                } else { 
                    part1 += obtenerPrimerCaracter(part2);
                    part2 = eliminarPrimerCaracter(part2);
                }
            }
            //DBG(part1); DBG(part2);
        }
    }
    for(int i = aux-1; i>=0; i--){
        if(res[i].first == 0 && res[i].second == 0){
            cout<<-1<<'\n';
        } else {
            cout<<res[i].first<<" "<<res[i].second<<'\n';
        }
    }
    return 0;
}