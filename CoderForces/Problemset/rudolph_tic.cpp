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
	vector<vector<char>> b(3, vector<char>(3));
	fore(i, 0, 3){
		fore(j, 0, 3){
			char c; cin>>c; 
			b[i][j] =c;
		}
	}
	if((b[0][0] == b[0][1] && b[0][1] == b[0][2] )&& b[0][0] != '.'){
		cout<<b[0][0]<<"\n"; 
		return; 
	} else if(( b[1][0] == b[1][1] && b[1][1] == b[1][2] )&& b[1][0] != '.'){
		cout<<b[1][0]<<"\n"; 
		return; 
	} else if( (b[2][0] == b[2][1] && b[2][1] == b[2][2]) && b[2][0] != '.'){
		cout<<b[2][0]<<"\n"; 
		return; 
	} else if( (b[0][0] == b[1][0] && b[1][0] == b[2][0]) && b[0][0] != '.'){
		cout<<b[0][0]<<"\n"; 
		return; 
	} else if( (b[0][1] == b[1][1] && b[1][1] == b[2][1] )&& b[0][1] != '.'){
		cout<<b[0][1]<<"\n"; 
		return; 
	} else if( (b[0][2] == b[1][2] && b[1][2] == b[2][2] )&& b[0][2] != '.'){
		cout<<b[0][2]<<"\n"; 
		return; 
	} else if( (b[0][0] == b[1][1] && b[1][1] == b[2][2] )&& b[0][0] != '.'){
		cout<<b[0][0]<<"\n"; 
		return; 
	} else if( (b[0][2] == b[1][1] && b[1][1] == b[2][0] )&& b[0][2] != '.'){
		cout<<b[0][2]<<"\n"; 
		return; 
	}
	cout<<"DRAW"<<"\n";

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
