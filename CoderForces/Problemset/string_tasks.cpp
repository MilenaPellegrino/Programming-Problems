#include<bits/stdc++.h>
#define pb push_back
#define fst first
#define snd second
#define str string
#define fore(i,a,b) for(int i=a,ggdem=b;i<ggdem;++i)
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
typedef long long ll;
using namespace std; 

std::string convertirAMinusculas(const std::string& str) {
    std::string resultado = str;
    
    // Utilizamos std::transform para aplicar std::tolower a cada carácter del string
    std::transform(resultado.begin(), resultado.end(), resultado.begin(),
                   [](unsigned char c) { return std::tolower(c); });
    
    return resultado;
}

bool esVocal(char ch){
    if( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y'){
        return true; 
    } else{
        return false;
    }
}

int main(){
    FIN; 
    string word; 
    string aux; 
    cin>>word;
    word = convertirAMinusculas(word);
    fore(i, 0, word.size()){
        if(esVocal(word[i]) == false){
            aux+='.'; aux+=word[i];
        }
    }
    cout<<aux;
    return 0;
}