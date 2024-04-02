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

double por(int total, int n){
	return (n*100)/total;
}
void solve(){
	map<string, int> m;
	int total = 0;
	int n = 29;
	while(n--){
		string s;
		while(getline(cin, s) && SZ(s) != 0){
				auto it = m.find(s);
				if(it != m.end()){
					it->snd += 1;
				} else {
					m[s] = 1;
			 }
		}
		total++;
	}
	DBG(total);
	for(auto elem : m){
		cout<<elem.fst<<": "<<(elem.snd * 100) / n<<endl;
	}
}
 
int main(){
    FIN; 
    //int t = 1;
    int t; cin>>t; 
    cout<<"\n";
    while(t--){
			solve();
	}
    return 0;
}
