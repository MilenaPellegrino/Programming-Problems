#include<bits/stdc++.h>
using namespace std;
#define fore(i,a,b) for(int i=(a);i<(b);i++)
#define forr(i, a, b) for(int i=(b);i>(a);i--)
#define forn(e,c) for(const auto &e : (c))
#define db(x) cout<<#x<< " = "<<(x)<<endl
#define sz(x) ((int)x.size())
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define pp pop_back
#define fst first
#define snd second
#define str string
#define pri(x) cout << (x) << "\n"
#define mset(a,v) memset((a),(v),sizeof(a))
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vii = vector<int>;
using vll = vector<ll>;
using vpi = vector<pii>;
template<class T>ostream&operator<<(ostream&o,vector<T>const&v){o<<"[ ";for(auto const&x:v)o<<x<<" ";return o<<"]";}

void solve(){
	string s; cin>>s; 
	string hs, ms;
	hs[0] = s[0];
	hs[1] = s[1];
	ms[0] = s[3];
	ms[1] = s[4];
	int h = stoi(hs);
	int m = stoi(ms);
	string man;
	if(h<12){
		man = "AM";
		if(h == 0){
			h = 12;
		}
		if(h<10){
			cout<<"0"<<h;
		}else{
			cout<<h;
		}
	}else {
		man = "PM";
		int h2 = h-12; 
		if(h2 == 0){
			h2 = 12;
		}
		if(h2<10){
			cout<<"0"<<h2;
		}else{
			cout<<h2;
		}
	}
	cout<<":";
	if(m<10){
		cout<<"0"<<m<<" "<<man<<"\n";
	}else{
		cout<<m<<" "<<man<<"\n";
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
