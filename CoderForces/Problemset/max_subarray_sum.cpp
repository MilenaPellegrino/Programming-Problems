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

int kadane(vector<int> const &arr){
	
    int max_so_far = 0;
    int max_ending_here = 0;
    fore (i, 0, SZ(arr)){
        max_ending_here = max_ending_here + arr[i];
        max_ending_here = max(max_ending_here, 0);
        max_so_far = max(max_so_far, max_ending_here);
    }
    return max_so_far;
}
 
void solve(){
	int n; cin>>n; 
	vector<int> a(n);
	fore(i, 0, n) cin>>a[i];
	pri(kadane(a));
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
