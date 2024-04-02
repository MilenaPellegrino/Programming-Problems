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

tuple<int, int, int> f(vector<int> b, int h, int j){
	sort(ALL(b));
	int aux_h = h; 
	int pen = 0;
	int punt = 0;
	fore(i, 0, SZ(b)){
		if((b[i]<= aux_h)){
			if(i == 0) pen+= b[i];
			pen+= b[i];
			punt ++;
			aux_h -=b[i]; 
		} else {
			break;
		}
	}
	tuple<int, int, int> t (punt, pen, j);
	return t;
}
void solve(){
	int n, m, h; cin>>n>>m>>h; 
	vector<vector<int>>c(n, vector<int>(m));
	fore(i, 0, n){
		fore(j, 0, m){
			int a; cin>>a; 
			c[i][j] = a;
		}
	}
	vector<tuple<int, int, int>> vt(n); 
	vt[0] = f(c[0], h, 1e6+10);
	fore(i, 2, n+1){
		vt[i-1] = f(c[i-1], h, i);
	}

	sort(ALL(vt), greater<tuple<int, int, int>>());
	fore(i, 0, n){
		if(get<2>(vt[i]) == 1e6+10){
			pri(i+1);
		}
	}

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
