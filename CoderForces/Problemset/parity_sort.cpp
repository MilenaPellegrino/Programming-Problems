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

bool dif(int a, int b){
	if((a % 2 == 0 && b % 2 != 0 )|| (a% 2 !=0 && b%2 ==0)){
		return false;
	} else {
		return true; 
	}
}
void solve(){
	int n; cin>>n; 
	vector<int> a(n);
	fore(i, 0, n) cin>>a[i];
	auto it = max_element(ALL(a));
	size_t pos = distance(a.begin(), it);
	size_t nn = n-1;
	//DBG(pos);
	//DBG(nn);
	//DBG(a[n-1]); DBG(a[pos]); //DBG(!dif(a[0], a[pos]);
	if(pos != nn && !dif(a[n-1], a[pos])){
		cout<<"NO"<<"\n"; 
		return;
	}
	auto its = min_element(ALL(a));
	size_t pos1 = distance(a.begin(), its);
	//DBG(pos1);
	//DBG(nn);
	//DBG(a[n-1]); DBG(a[pos1]); //DBG(!dif(a[n-1], a[pos1]);
	if(pos1!= 0 && !dif(a[0], a[pos1])){
		cout<<"NO"<<"\n"; 
		return;
	}
	cout<<"YES"<<"\n";
	
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
