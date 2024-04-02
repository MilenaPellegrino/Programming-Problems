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

int ve(const vector<int>& vectorDeDigitos) {
    int resultado = 0;

    for (int digito : vectorDeDigitos) {
        resultado = resultado * 10 + digito;
    }

    return resultado;
}
vector<int> ev(int n){
	vector<int> res;
	while(n !=0){
		res.pb(n%10);
		n /=10;
	}
	return res;
}
void solve(){
	int ab; cin>>ab;
	//int a, b; 
	vector<int> a;
	vector<int> b; 
	vector<int> c; 
	while(ab!=0){
		c.pb(ab%10);
		ab /=10; 
	}
	reverse(ALL(c));
	a.pb(c[0]);
	bool band = true;
	fore(i, 1, SZ(c)){
		if(c[i] ==0 && band){
			a.pb(c[i]);
		} else {
			band = false;
			b.pb(c[i]);
		}
	} 
	int aa = ve(a);
	int bb = ve(b);
	if(aa<bb){
		cout<<aa<<" "<<bb<<"\n";
		return;
	} else {
		a.pb(b[0]);
		fore(i, 1, SZ(b)){
			if(b[i] == 0){
				a.pb(b[i]);
			} else {
				break;
			}
		}
	}
	aa = ve(a);
	bb = ve(b);
	if(aa<bb && bb !=0){
		cout<<aa<<" "<<bb<<"\n"; 
	} else {
		cout<<-1<<"\n";
	}
}
 
int main(){
    FIN; 
    //int t = 1;
    int t; cin>>t; 
    while(t--){
			solve();
	}
    return 0;
}
