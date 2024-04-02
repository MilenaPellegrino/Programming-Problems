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

void solve(){
	int k; cin>>k;
	map<char, int> m;
	fore(i, 0, k){
		char c; cin>>c; 
		int n; cin>>n; 
		m[c] = n;
	}
	int mm; cin>>mm;
	int res = 0;
	//cout<<"\n";
	fore(j, 0, mm+1){
		string s;  getline(cin, s);
		//cout<<s<<"\n";
		fore(l, 0, SZ(s)){
			res += m[s[l]];
			cout<<m[s[l]]<<"\n";
		}
	}
	cout<<(double)res/100<<"$"<<"\n";
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
