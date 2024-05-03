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
	ll n; cin>>n; // 2e5
	vll a(n); fore(i, 0, n) cin>>a[i];
	priority_queue<ll, deque<ll>> pq; 
	ll he = 0, ans = 0;
	fore(i, 0, n){
		if(a[i]>=0){
			ans++;
			he+=a[i];
		}else{
			if(he+a[i]>=0){
				ans++;
				he+=a[i];
				pq.push(-1*(a[i])); 
			} else {
				if(abs(a[i]) < pq.top() && sz(pq)){
					//he += abs(pq.top() - a[i]);
					he -= (-1) * pq.top();
					he += a[i];
					pq.pop(); 
					pq.push(-1*(a[i])); 
				}
			}
		}
	}
	pri(ans);
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
