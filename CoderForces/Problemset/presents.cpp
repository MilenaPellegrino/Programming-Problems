#include<bits/stdc++.h>
#define pb push_back
#define fst first
#define snd second
#define str string
#define fore(i,a,b) for(int i=(a);i<(b);i++)
#define DBG(x) cout<<#x<< " = "<<(x)<<endl
#define pri(x) cout << (x) << "\n"
#define ALL(x) (x).begin(),(x).end()
#define SZ(x) ((int)x.size())
#define ii pair<int, int> 
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
typedef long long ll;
using namespace std; 

int main(){
    FIN; 
    int n; cin>>n;
    vector<ii> p(n);
    fore(i, 0, n){
        int a; cin>>a;
        p[i].fst = a; 
        p[i].snd = i +1;
    }
    sort(ALL(p)); 
    fore(i, 0, n){
        cout<<p[i].snd<<" ";
    }
    return 0;
}