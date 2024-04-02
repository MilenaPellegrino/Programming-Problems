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


int main(){
    FIN; 
    ll n, d; cin>>n>>d;
    ll l, h; cin>>l>>h;
    vector<pair<ll, ll>> p(n); 
    ll cont = 0;
    vector<ll> c;
    fore(i, 0, n){
		ll xi, yi; cin>>xi>>yi;
		ll xy = (xi * l) + (yi * h);
		p[i].fst = xy;
		p[i].snd = i + 1;
	}
	sort(ALL(p));
	fore(i, 0, n){
		if(p[i].fst <= d){
			d  -= p[i].fst; 
			c.pb(p[i].snd);
			cont++;
		} else{
			break;
		}
	}
	pri(cont);
    fore(i, 0, cont){
		cout<<c[i]<<" ";
    }

    return 0;
}
