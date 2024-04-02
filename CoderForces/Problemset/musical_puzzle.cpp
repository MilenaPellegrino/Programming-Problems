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
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n; // n = 4 
        set<str> mds; // mds = ab 
        string s; cin >> s; // s = abab
        string fist = "";fist+=s[0]; fist+=s[1]; mds.insert(fist); // fist =  ab
        ll res = 1; // res = 1
        fore(i,2,n){
            string aux = ""; aux += s[i-1]; aux += s[i]; // aux =  ba ab
            if(mds.count(aux))continue; // 
            mds.insert(aux); // mds = ab ba 
            res++; // res = 2;
        }
        cout << res << "\n"; // 2
    }
    return 0;
}