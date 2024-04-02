#include<bits/stdc++.h>
using namespace std;
#define fore(i,a,b) for(int i=(a);i<(b);i++)
#define forr(i, a, b) for(int i=(b);i>(a);i--)
#define forn(e,c) for(const auto &e : (c))
#define db(x) cout<<#x<< " = "<<(x)<<endl
#define sz(x) ((int)x.size())
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define pp pop_back
#define fst first
#define snd second
#define str string
#define pri(x) cout << (x) << "\n"
#define mset(a,v) memset((a),(v),sizeof(a))
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vii = vector<int>;
using vll = vector<ll>;
using vpi = vector<pii>;
template<class T>ostream&operator<<(ostream&o,vector<T>const&v){o<<"[ ";for(auto const&x:v)o<<x<<" ";return o<<"]";}

double calc_imc(double p, double e){
	return static_cast<double>(p) / (e * e);
}

bool compt(tuple<int, string, double, double> a, tuple<int, string, double, double> b){
	return get<3>(a) > get<3>(b);
}
void solve(){
	int n; cin>>n;
	vector<tuple<int, string, double, double>> p(n);
	fore(i, 0, n){
		int id; cin>>id; 
		string s; getline(cin, s);
		double pes; cin>>pes;
		double estat; cin>>estat;
		get<0>(p[i]) = id; 
		get<1>(p[i]) = s;
		get<2>(p[i]) = pes;
		get<3>(p[i]) = estat;
	}
	sort(all(p), compt);
	fore(i, 0, n){
		cout<<get<0>(p[i])<<" "<<get<1>(p[i])<<" "<<calc_imc(get<2>(p[i]), get<3>(p[i]))<<"\n";
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
