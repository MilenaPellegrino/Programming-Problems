#include<bits/stdc++.h>
#define pb push_back
#define fst first
#define snd second
#define str string
#define fore(i,a,b) for(int i=(a);i<(b);i++)
#define DBG(x) cout<<#x<< " = "<<(x)<<endl
#define prnt(x) cout << (x) << "\n"
#define ALL(x) (x).begin(),(x).end()
#define SZ(x) ((int)x.size())
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
typedef long long ll;
using namespace std; 

int main(){
    FIN; 
    string s;
    vector<int> ss;
    string res;
    cin>>s;
    fore(i, 0, s.size()){
	if(s[i] != '+'){
	  int si = stoi(s[i]);
	   ss.pb(si);

	}
    }
  // Imprimo el vector 
  fore(i, 0, ss.size()){
    cout<<ss[i]<<"";}
    sort(ALL(ss));
    // Imprimimo el vector
    for(const auto& el : ss){
      cout<<el<<" ";}
    fore(i, 0, ss.size()*2-1){
     if(i % 2 == 0){
	res[i] = ss[i];
     } else {
       res[i] = '+';
     }

    }
    cout<<res<<"\n";
    fore(i, 0, res.size()){
      cout<<res[i];}
    return 0;
}
