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
#define mp make_pair
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
	string s1; cin>>s1;
	string s2; cin>>s2;
	ll count1=0, count2 = 0;
	char l1, l2;
	fore(i, 0, sz(s1)){
		if(s1[i] == 'X'){
			count1++;
		} else {
			l1 = s1[i];
		}
	}
	fore(i, 0, sz(s2)){
		if(s2[i] == 'X'){
			count2++;
		}else{
			l2 = s2[i];
		}
	}
	//db(l1); db(l2);
	//db(count1); db(count2);
	if(l1 == l2 && (l1 != 'S')){
		if(count1 <count2){
			cout<<"<\n";
		} else if(count1>count2) {
			cout<<">\n";
		} else if (count1 == count2){
			cout<<"=\n";
		}
		return;
	} 
		if(l1 == l2 && (l1 == 'S')){
		if(count1 <count2){
			cout<<">\n";
		} else if(count1>count2) {
			cout<<"<\n";
		} else if (count1 == count2){
			cout<<"=\n";
		}
		return;
	} 
	if (l1 == 'S'){
		cout<<"<\n";
	} else if (l1 == 'L'){
		cout<<">\n";
	} else if (l1 == 'M' && l2 == 'L'){
		cout<<"<\n";
	} else if(l1 == 'M' && l2=='S'){
		cout<<">\n";
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
