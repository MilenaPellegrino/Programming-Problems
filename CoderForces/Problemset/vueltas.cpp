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

using Mat = vector<vector<int>>;
Mat vert(Mat mats, int f, int c){
	Mat mat = mats;
	fore(i, 0, f){
		fore(j, 0, c/2){
			int temp = mat[i][j];
			mat[i][j] = mat[i][c-j-1];
			mat[i][c-j-1] = temp;
		}
	}
	return mat;
}

Mat hor(Mat mats, int f, int c){
	Mat mat = mats;
	fore(i, 0, f/2){
		fore(j, 0, c){
			int temp = mat[i][j];
			mat[i][j] = mat[f-i-1][j];
			mat[f-i-1][j] = temp;
		}
	}
	return mat;
}

void printm(Mat mat, int f, int c){
	fore(i, 0, f){
		fore(j, 0, c){
			cout<<mat[i][j]<<" ";
		}
		cout<<"\n";
	}
}
void solve(){
	int m, n; cin>>m>>n; 
	vector<vector<int>> mat(m, vector<int>(n));
	fore(i, 0, m){
		fore(j, 0, n){
			cin>>mat[i][j];
		}
	}
	int k; cin>>k;
	int cnth = 0, cntv = 0;
	fore(i, 0, k){
		char c; cin>>c; 
		if(c == 'H') cntv++; 
		else cnth++;
	}
	if(cnth % 2 == 0 && cntv%2==0){
		printm(mat, m, n);
	} else if (cnth % 2 == 0 && cntv  %2!=0){
		mat = vert(mat, m, n);
		printm(mat, m, n);
	} else if (cnth % 2 !=0 && cntv %2 ==0){
		mat = hor(mat, m, n);
		printm(mat, m, n);
	} else {
		mat = hor(mat, m, n);
		mat = vert(mat, m, n);
		printm(mat, m, n);
	}
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
