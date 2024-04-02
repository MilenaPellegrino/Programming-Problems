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
	int n; cin>>n; 
	vector<int> r(n); fore(i, 0, n) cin>>r[i]; 
	vector<int> b(n); fore(j, 0, n) cin>>b[j];
	sort(ALL(r));
	sort(ALL(b), greater<int>());
	vector<ll> sum(n);
	fore(i, 0, n){
		sum[i] = r[i] + b[i];
	}
	sort(ALL(sum));
	ll res = sum[n-1] - sum[0];
	pri(res);
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
