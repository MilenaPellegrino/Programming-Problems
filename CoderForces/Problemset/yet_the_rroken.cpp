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
/*
string l(string ss, int i){
	string s = ss;
	for(int j = i-1; j>=0; j--){
		if(islower(s[j]) && SZ(s)>1){
			s.erase(j, 1);
			return s;
		}
	}
	return s;
}

string u(string ss, int i){
	string s = ss;
	for(int j = i-1; j>=0; j--){
		if(isupper(s[j]) && SZ(s)>1){
			s.erase(j, 1);
			return s;
		}
	}
	return s;
} */
void solve(){
	string s; cin>>s; 
	string r = ""; 
	fore(i, 0, SZ(s)){
		if(s[i] == 'b' && SZ(r) >=1){
			//r = l(r, i);
			for(int j = i-1; j>=0; j--){
				if(islower(r[j])){
				r.erase(j, 1);
			}
		}
		} else if(s[i] == 'B' && SZ(r) > 1){
			//r = u(r, i);
			for(int j = i-1; j>=0; j--){
				if(islower(r[j])){
				r.erase(j, 1);
			}
		}
		} else if (s[i] != 'b' && s[i] != 'B'){
			r += s[i];
		}
	}
	fore(i, 0, SZ(r))cout<<r[i];
	cout<<"\n";
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
