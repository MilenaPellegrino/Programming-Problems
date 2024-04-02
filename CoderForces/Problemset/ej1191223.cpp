#include<bits/stdc++.h>
#include <unordered_map>
#include <string>
#include <iostream>
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
    int t; cin>>t; 
    while(t--){
        int n; cin>>n; 
        int like =0; 
        unordered_map<char, ll> sub; 
        string comment; 
        cin>>comment; 
        for(char ch : comment){
            sub[ch]++;
        }
        for(auto i:sub){
            if(i.second >= i.first - 'A' + 1){
                like ++;
            }
        }
        cout<<like<<"\n";
    } 
    return 0;
}
