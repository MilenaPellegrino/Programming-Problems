#include<bits/stdc++.h>
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
typedef long long ll;
using namespace std; 

int main(){
    FIN; 
    int t; 
    cin>>t;
    vector<string> res; 
    while(t--){
        string username; 
        cin>>username; 
        username = username.substr(0, username.size() - 1);
        res.push_back(username);
    }
    for(string elem : res){
        cout<<elem<<'\n';
    }
    return 0;
}