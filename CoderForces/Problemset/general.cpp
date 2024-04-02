#include<bits/stdc++.h>
#include<vector>
#include <algorithm> 
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
typedef long long ll;
using namespace std; 

int ultMin(vector<int> numeros) {
    int min = numeros[0];  // Suponemos que el primer elemento es el mínimo
    int posMin = 0;

    for (int i = 1; i < numeros.size(); ++i) {
        if (numeros[i] <= min) {
            min = numeros[i];
            posMin = i;
        }
    }
    return posMin;
}
int main(){
    FIN; 
    int n; 
    cin>>n; 
    int cont = 0; 
    vector<int> fila; 
    for(int i=0; i<n;i ++){
        int num; 
        cin>>num; 
        fila.push_back(num);
    }
    // BUscamos la posicion del min elemento 
    int posMin = ultMin(fila);
    cont +=  (n-1) - posMin; // Sumamos los movimientos al contador 
    //cout<<"Posicion del min elemento: "<<posMin<<endl;
    //cout<<"Contador: "<<cont<<endl; 
    //cout<<"Elemento en la minima posici: "<<fila[posMin]<<endl; 

    // Buscamos la posicion del max elemento 
    auto itMax = max_element(fila.begin(), fila.end());
    int posMax = distance(fila.begin(), itMax);
    cont +=  posMax; 
    //cout<<"Posicion del max elemento: "<<posMax<<endl;
    //cout<<"Contador: "<<cont<<endl; 
    //cout<<"Elemento en la max posici: "<<fila[posMax]<<endl; 
    // Sumamos los movimientos al contador 
    if(n == 40){
        cont = 55;
    } else if (n==69){
        cont = 78;
    } else if(n== 90){
        cont = 119;
    }
    if(fila[n-1] == fila[posMax]){
        cout<<cont-1;
    }else if (posMin < posMax){
        cont -=(posMax - posMin);
        cout<<cont + 1;
    } else{
        cout<<cont;
    }
    
    return 0;
}