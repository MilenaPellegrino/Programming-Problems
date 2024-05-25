#include<bits/stdc++.h>
using namespace std;
#define fore(i,a,b) for(int i=(a);i<(b);i++)
#define rof(i, a, b) for(int i=(b);i>(a);i--)
#define forn(e,c) for(const auto &e : (c))
#define db(x) cout<<#x<< " = "<<(x)<<endl
#define sz(x) ((int)x.size())
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define pp pop_back
#define mp make_pair
#define fst first
#define snd second
#define str string
#define pri(x) cout << (x) << "\n"
#define mset(a,v) memset((a),(v),sizeof(a))
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
using ll = long long;
using pii = pair<int,int>;
using ii = pair<ll,ll>;
using vii = vector<int>;
using vll = vector<ll>;
using vpi = vector<pii>;
using vvll = vector<vector<ll>>;
template<class T>ostream&operator<<(ostream&o,vector<T>const&v){o<<"[ ";for(auto const&x:v)o<<x<<" ";return o<<"]";}

/*
  // The transform function takes start and end position
  // of first array, start position of second array,
  // start position of output array and the binary
  // function to apply to the input arrays.
  // std::plus adds together its two arguments:
  std::transform (foo.begin(), foo.end(), bar.begin(), foo.begin(), std::plus<int>());
                                       // foo: 21 41 61 81 101
*/
void solve(){
    int n; cin>>n ;
    map<string, vector<string>> mp;
    fore(i, 0, n){
        string s; cin>>s;
        //transform(s.begin(), s.end(), s.begin(), tolower);
        //transform(s.begin(), s.end(), s.begin(), std::tolower);
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        string r; cin>>r;
        string p; cin>>p;
        transform(p.begin(), p.end(), p.begin(), ::tolower);
        mp[p].pb(s);
    }
    queue<string>q;
    for (auto it : mp) q.push(it.first);
    // recorro
    int ans=0;
    //pri(ans);
    ///for(auto elem : mp) cout<<elem<<endl;
    while(!q.empty()){
        ans++;
        int ta=sz(q);
        fore(i, 0, ta){
            string temp = q.front();
            //string temp =  q.top();
            q.pop();
            for(auto it:mp[temp]){
                q.push(it);
            }
        }
        //pri(ans);
    }
    pri(ans);
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
