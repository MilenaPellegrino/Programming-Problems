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
#define mp make_pair
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
	ll n, m, k; cin>>n>>m>>k;
	vll a(n);
	fore(i, 0, n){
		ll ai; cin>>ai;
		//a[i] = ai-k;
		a.pb(ai);
	}
	sort(all(a));
	multiset<ll> b;
	while(m--){
		ll bi; cin>>bi;
		b.insert(bi);
	}
	cout<<a<<endl;
	int cont = 0;
	fore(i, 0, n){
		forn(e, b) cout<<e<<" ";
		auto it = b.lower_bound(a[i]);
		//db(*it); db(a[i]); db(a[i] + 2*k);
		if((*it >= a[i]-k )&& (*it <= a[i]+k) && it != b.end()){
			cont++;
			b.erase(*it);
		}
		db(cont);
		cout<<"+++++++++++++++++++++++++++++++++++++++++++++"<<endl;
	}
	pri(cont);
}
 
int main(){
    FIN; 
    int t = 1;
    //int t; cin>>t; 
    while(t--){
			solve();
	}
    return 0;
}
