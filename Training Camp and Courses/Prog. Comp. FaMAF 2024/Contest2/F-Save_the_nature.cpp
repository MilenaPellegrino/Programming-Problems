#include<bits/stdc++.h>
using namespace std;
#define fore(i,a,b) for(ll i=(a);i<(b);i++)
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

ll z;
ll k, x, y, a, b, n;
vll pr;
bool can(ll st) {
	vll p(st);
	for (int i=a-1; i<st; i+= a) p[i] += x;  // x% para todo a ticket
	for (int i=b-1; i<st; i+= b) p[i] += y;  // y% para todo b ticket
	sort(all(p), greater<ll>());
	ll cur = 0;
	fore (i, 0, st) cur += p[i] * pr[i] / 100;
	return cur >= k;
}

void solve(){
	pr.clear();
	cin >> n;
	fore (i, 0, n) {
		ll ai;
		cin>>ai;
		pr.pb(ai);
	}
	sort(all(pr), greater<int>()); 
	cin>>x>>a>>y>>b>>k;
	ll l = 0;
	ll h = n;
	ll ans = -1;
	while(l<=h) {
		ll mid = l + (h-l) / 2;
		if (can(mid)) {
			ans = mid;
			h = mid-1;
		} else {
			l = mid+1;
		}
	}
	pri(ans);
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
