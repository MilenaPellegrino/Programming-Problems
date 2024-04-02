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
typedef unsigned long long ull;
using namespace std;

unordered_map<ull, ull> memo;
ull fibo(ull n){
	if(n<= 1)return n; 
	if(memo.find(n) != memo.end())return memo[n];
	memo[n] = fibo(n-1) + fibo(n-2);
	return memo[n];
}
ull pos(ull n){
	if(n<0)return -1; 
	ull posi = 0;
	while(fibo(posi) <= n){
		if(fibo(posi) == n)return posi;
		posi ++;
	}
	return -1;
}
void solve(){
	ull n; cin>>n;
	ull r = pos(n);
	pri(r);
	 
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
