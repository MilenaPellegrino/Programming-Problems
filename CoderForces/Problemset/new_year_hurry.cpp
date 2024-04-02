#include<bits/stdc++.h>
#define pb push_back
#define fst first
#define snd second
#define str string
#define fore(i,a,b) for(int i=(a);i<(b);i++)
#define DBG(x) cout<<#x<< " = "<<(x)<<endl
#define prt(x) cout << (x) << "\n"
#define ALL(x) (x).begin(),(x).end()
#define SZ(x) ((int)x.size())
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
typedef long long ll;
using namespace std; 

int binarysearch(vector<int> v, int numMax) {
    int l = 0;
    int r = v.size() - 1;
    int pos = -1;

    while (l <= r) {
        int m = l + (r - l) / 2;
        if (v[m] <= numMax) {
            pos = m;
            l= m + 1;  // Buscar en la mitad derecha
        } else {
            r = m - 1;  // Buscar en la mitad izquierda
        }
    }
    return pos;
}
int main(){
    FIN; 
    int n, k; cin>>n>>k; // 240min entre 20:00 y 00:00 
    //vector<int> p; 
    vector<int> sp(n+1); 
    int max = 240 - k; 
    fore(i, 0, n+1){
        if (i == 0) {
            sp[i] = 0;  
        } else {
            sp[i] = sp[i - 1] + i * 5;
        }
    }
    int res = binarysearch(sp, max);
    prt(res);
    return 0;
}