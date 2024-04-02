#include<bits/stdc++.h>
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
typedef long long ll;
using namespace std; 

bool esDivisible(int numero, int divisor) {
    // Verificar si el número es divisible por el divisor
    return (numero % divisor == 0);
}

int main(){
    FIN; 
    int t;
    cin>>t; 
    int cont =0;
    vector<int> res; 
    while(t--){
        int a, b; cin>>a>>b; 
        while(esDivisible(a, b) == false){
            a++;
            cont ++;
        }
        res.push_back(cont);
        cont = 0;
    }
    for (int elem : res){
        cout<<elem<<'\n';
    }
    return 0;
}