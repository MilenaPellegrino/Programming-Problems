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

const int MAXN = 1e9 + 10;
template<typename T>
ostream& operator<<(ostream &os, const vector<T> &v) {
    os << "[";
    for (size_t i = 0; i < v.size(); ++i) {
        if (i) os << ", ";
        os << v[i];
    }
    os << "]";
    return os;
}
int main(){
    FIN; 
    int n; cin>>n; 
    vector<int> a(n); // 2 2 1 1 2 1 2 1 2 1
    fore(i, 0, n)cin>>a[i]; 
    set<int> s;
    int cont = 0;
    int res = 0; 
    fore(i, 0, n){

		// Si a[i] esta en le set 
		auto it = s.find(a[i]);
		if(it != s.end()){
			res = max(cont, res);
			s.clear();
			s.insert(a[i]);
			cont = 1;
		} else { // Si a[i] no esta en el set 
 			s.insert(a[i]);
 			cont ++; 
		}
	}
	 
	pri(max(res, cont));
    return 0;
}
