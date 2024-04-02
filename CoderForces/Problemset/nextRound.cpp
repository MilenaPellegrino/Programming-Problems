#include<bits/stdc++.h>
#define pb push_back
#define fst first
#define snd second
#define str string
#define fore(i,a,b) for(int i=a,ggdem=b;i<ggdem;++i)
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
typedef long long ll;
using namespace std; 

int main(){
    FIN; 
    int n, k; cin>>n>>k; 
    int contest[n];
    int counter = 0; 
    fore(i, 0, n){
        cin>>contest[i];
    }
    fore(i, 0, n){
        if(contest[i] >= contest[k-1] && contest[i] > 0){
            counter ++;
        }
    }
    cout<<counter;
    return 0;
}