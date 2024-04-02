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

int d(int a, int b){
	return (a + b - 1)/b;
}
int ss(int a, int b){
	int n = a + b; 
	int divs = n + 2 - 1;
	int res = divs / 2;
	return res;
}
vector<int> c(int n){
	vector<int> res; 
	while(n>0){
		int dig = n % 10;
		res.insert(res.begin(), dig);
		n/=10;
	}
	return res;
}
void solve(){
	int n; cin>>n; 
	string num; cin>>num;
	vii a(n);
	fore(i, 0, n){
		a[i] = stoi(string(1, num[i]));
	}
	cout<<a<<endl;
	int c0l = 0, c1l = 0, c0r = 0, c1r = 0; 
	fore(i, 0, d(n, 2)){
		if(a[i] == 0) c0l++; 
		else c1l ++;
	}
	fore(i, d(n, 2), n){
		if(a[i] == 0) c0r ++;
		else c1r++;
	}
	db(c0l); db(c1l); db(c0r); db(c1r);
	bool band = true;
	int j = d(n, 2);
	while(band){
		if(c0l >= ss(c0l, c1l) && c1r >= ss(c0r, c1r)) {
			band = false;
		}
		if (c0l < ss(c0l, c1l)) {
			j--;
			if(a[j-1] == 0){
				c0r++; 
				c0l--;
			} else {
				c1r++; 
				c1l--;
			}
		}
		if(c1r < ss(c0r, c1r)){
			j--;
			if(a[j-1] == 0){
				c0l++; 
				c0r--;
			} else {
				c1l ++;
				c1r --;
			}
		}
		if(j == 0) band = false;
	}
	pri(j);
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
