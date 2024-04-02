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
template<typename T>
std::ostream& operator<<(std::ostream &os, const std::vector<T> &v) {
    os << "[";
    for (size_t i = 0; i < v.size(); ++i) {
        if (i) os << ", ";
        os << v[i];
    }
    os << "]";
    return os;
}
void solve(){
	int n; cin>>n; 
	vector<bool> b(n-1, false);
	//cout<<b<<endl;
	vector<int> a(n);
	fore(i, 0, n)cin>>a[i];
	//cout<<a<<endl;
	fore(i, 0, n-1){
		int rest = abs(a[i] - (a[i+1]));
		//DBG(rest);
		b[rest-1] = true;
	}
	//cout<<b<<endl;
	fore(i, 0, n-1){
		if(b[i] == false){
			cout<<"Not jolly"<<"\n";
			return;
		}
	}
	cout<<"Jolly"<<"\n";
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
