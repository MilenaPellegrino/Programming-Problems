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

int main(){
    FIN; 
    int n, m; 
    cin>>n>>m; 
    vector<int> a(m);
    vector<int> res1(n);
    vector<int> res2(n);
    int resu1 =0; 
    int resu2 = 0; 
    fore(i, 0, m){
        cin>>a[i];
    }
    // Ordenando de menor a mayor 
    sort(ALL(a)); 
    fore(i, 0, n){
        res1[i] = a[i]; 
    }
    // Ordenando de mayor a menor 
    sort(ALL(a), greater<int>());
    fore(i, 0, n){
        res2[i] = a[i];
    }
    resu1 = res1[n-1] - res1[0];
    resu2 = res2[n-1] - res2[0]; 
    if(resu2 < 0){
        cout<<resu1<<"\n"; 
    } else if( resu1<0){
        cout<<resu2<<"\n";
    }else{
        cout<<min(resu1, resu2);
    }
    return 0;
}