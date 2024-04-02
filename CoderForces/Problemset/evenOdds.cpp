#include<bits/stdc++.h>
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
typedef long long ll;
using namespace std; 

/*
bool esPar(int numero) {
    return numero % 2 == 0;
}
*/
int main(){
    FIN; 
    ll n, k; 
    cin>>n>>k; 
    vector<ll> res;
    for (int i = 1; i <= k; ++i) {
        res.push_back(i);
    }
    stable_partition(res.begin(), res.end(), [](int x) { return x % 2 != 0; });
    for(int num : res){
        cout<<num;
    }
    cout<<endl<<res[k-1];
/*
    for(int i=1; i<=n;i++){
        if(esPar(i) == false){
            res.push_back(i);
        }
    }
    for (int i=1; i<=n; i++){
        if(esPar(i)){
            res.push_back(i);
        }
    }
    cout<<res[k - 1];
*/
    return 0;
}

