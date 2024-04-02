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
int MAXN = 1e5;

double dis(int x1, int x2, int y1, int y2){
	int xi = (x2 - x1) * (x2 - x1);
	int yi = (y2 - y1) * (y2 - y1);
	double r = sqrt(xi + yi);
	return r;
}
void solve(){
	int n; cin>>n;
	vector<pair<int, int>> a(2*n);
	set<int> b;
	//double mins = MAXN;
	double temp = MAXN;
	int pos = -1;
	double dist = 0;
	fore(i, 0, 2*n){
		string s; cin>>s; 
		int x, y; cin>>x>>y; 
		a[i].fst = x; a[i].snd = y; 
	}  
	fore(i, 0, n){
		cout<<"ITERACION EN I: "<<i<<endl;
		fore(j, 1, 2*n){
			cout<<"ELEMENTOS A COMPARAR: "<<endl; 
			cout<<a[i].fst<<" "<<a[j].fst<<" "<<a[i].snd<<" "<<a[j].snd;
			auto it = b.find(j);
			if(dis(a[i].fst, a[j].fst, a[i].snd, a[j].snd) < temp && it == b.end()){
				temp = dis(a[i].fst, a[j].fst, a[i].snd, a[j].snd);
				pos = j;
			}
			cout<<endl;
		}
		cout<<endl;
		DBG(dist); DBG(temp); 
		cout<<"SET: "<<endl;
		for(auto elem : b) cout<<elem<<" "; 
		cout<<endl; 
		dist += temp; 
		temp = MAXN;
		b.insert(pos);
		b.insert(i);
		pos = -1;
	}
	pri(dist);
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
