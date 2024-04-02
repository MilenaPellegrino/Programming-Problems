#include<bits/stdc++.h>
#include<cstring>
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
typedef long long ll;
using namespace std; 

bool contiene(const char* palabra) {
    // Iterar sobre la cadena de texto
    for (int i = 0; i < strlen(palabra); ++i) {
        // Verificar si la letra actual es 'h', 'q' o '9'
        if (palabra[i] == 'H' || palabra[i] == 'Q' || palabra[i] == '9') {
            return true;  // Se encontró al menos una de las letras especiales
        }
    }
    return false;  // No se encontraron letras especiales
}
int main(){
    FIN; 
    char res[1000];
    cin>>res; 
    if(contiene(res)){
        cout<<"YES";
    } else{
        cout<<"NO";
    }
    return 0;
}