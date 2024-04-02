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
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
typedef long long ll;
using namespace std; 
 
int main(){
    FIN; 
    int a, b, c; cin>>a>>b>>c; 
    int m1 = max(a + (b * c), a * (b + c)); 
    int m2 = max(a * b *c, (a + b) * c); 
    cout<<max(m1, max(a+b+c, m2))<<"\n";
    return 0;
}
