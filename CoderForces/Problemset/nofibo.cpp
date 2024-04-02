#include<bits/stdc++.h>
#include<math.h>
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
typedef long long ll;
using namespace std; 

bool esCuadradoPerfecto(int n) {
    int raiz = sqrt(n);
    return raiz * raiz == n;
}

bool esFib(int n) {
    return esCuadradoPerfecto(5 * n * n + 4) || esCuadradoPerfecto(5 * n * n - 4);
}
int main(){
    FIN; 
    int n; 
    cin>>n;
    vector<int> res; 
    for(int i=1; i<n; i++){
        if (esFib(i) ==  false){
            res.push_back(i);
        }
    }
    for(const auto& num : res){
        cout<<num<<" ";
    }
    return 0;
}