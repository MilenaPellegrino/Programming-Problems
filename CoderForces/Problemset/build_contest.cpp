#include<bits/stdc++.h>
#define pb push_back
#define fst first
#define snd second
#define str string
#define fore(i,a,b) for(int i=(a);i<(b);i++)
#define DBG(x) cout<<#x<< " = "<<(x)<<endl
#define ALL(x) (x).begin(),(x).end()
#define SZ(x) ((int)x.size())
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
typedef long long ll;
using namespace std; 

ll a[100005], cnt[100005];

int main()
{
    ll m,n,x;

    ll ans=0;
    cin>>n>>m;

    fore(i,0, m)
    {
        cin>>x; 
        a[x]++; 
        cnt[a[x]]++; 
        if(cnt[a[x]] ==n)cout<<"1";
        else cout<<"0";
    }
    return 0;
}