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

int main(){
    FIN; 
    ll n; cin>>n; 
    ll nums[n]; 
    int count = 1; 
    int maxCount = 1; 
    fore(i, 0, n){
        cin>>nums[i];
    }
    fore(i, 1, n){
        if(nums[i]>= nums[i-1]){
            count++;
        } else{
            count = 1; 
        }
        if(maxCount <= count){
            maxCount = count; 
        }
    }
    cout<<maxCount;
    return 0;
}