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

int chanu(char n){
    int r = n - 'a'; 
    return r + 1;
}

int main(){
    FIN; 
    int n, q; cin>>n>>q; 
    vector<int> sumpc(n + 1);
    fore(i, 0, n){
        char c; 
        cin >> c; 
        sumpc[i + 1] = sumpc[i] + chanu(c);
    }
    fore(i, 0, q){
        int a, b; cin>>a>>b;
        int rest = sumpc[b] - sumpc[a-1];
        cout<<rest<<"\n";
    }

}