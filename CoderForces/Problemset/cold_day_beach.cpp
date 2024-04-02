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

int dist(int x1, int y1, int x2, int y2){
	int res = ((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)); 
	int r = sqrt(res);
	return r;
}
void solve(){
	int n; cin>>n; 
	int w, l, tx, ty; cin>>w>>l>>tx>>ty;
	vector<int> d1(n);
	vector<int> d2(n);
	fore(i, 0, n){
		int x, y; cin>>x>>y; 
		d1[i] = dist(x, y, tx, ty);
	}
	fore(j, 0, n){
		int x2, y2; cin>>x2>>y2;
		d2[j] = dist(x2, y2, tx, ty);
	}
	sort(ALL(d1));
	sort(ALL(d2));
	int winner = 0;
	int cont = 0 ;
	if(d1[0] < d2[0]){
		cout<<"A"<<" "; 
		winner = 1;
	} else {
		cout<<"R"<<" "; 
		winner = 2; 
	}
	if(winner == 1){
		fore(i, 0, n){
			if(d1[i] <= d2[0]){
				cont++;
			} else{
				break;
			}
		}
	} else {
		fore(i, 0, n){
			if(d2[i] <= d1[0]){
				cont++;
			} else{
				break;
			}
		}		
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
