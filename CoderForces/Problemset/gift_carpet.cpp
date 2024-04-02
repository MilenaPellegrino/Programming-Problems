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
bool contiene(string palabra, char c) {
    for (int i = 0; i < SZ(palabra); ++i) {
        if (palabra[i] == c) {
            return true;  
        }
    }
    return false;  
}
string v = "vika";
void solve(){
		int n, m; cin>>n>>m;
		//vector<string> a; 
		vector<string> s(m); 
		fore(i, 0, n){
			fore(j, 0, m){
				char c; cin>>c; 
				s[j] += c;
			}
		}
		int cont = 0;
		int j = 0;
		fore(i, 0, m){
			if(contiene(s[i], v[j])){
				j++;
				cont++;
			}
		}
		if(cont == 4){
			cout<<"YES"<<"\n";
		} else{
			cout<<"NO"<<"\n";
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
