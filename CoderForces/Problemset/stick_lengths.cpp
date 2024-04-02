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
#define mset(a,v) memset((a),(v),sizeof(a))
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
typedef long long ll;
using namespace std; 

 
int main(){
    FIN; 
    int n; cin>>n; 
    vector<ll> a(n);
    fore(i, 0, n)cin>>a[i];
    sort(ALL(a)); // 1 2 2 3 5
    int m = (n-1) / 2; // m = 2
    ll value = a[m]; // value = 2
    ll cont = 0; 
    fore(i, 0, n){
		if(a[i] != value){
			cont += abs(a[i] - value); 
		}
	}
	pri(cont);
    return 0;
}
