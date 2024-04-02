#include<bits/stdc++.h>
#include<vector>
#include <algorithm> 
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
typedef long long ll;
using namespace std; 

int main(){
    FIN; 
    string word;
    //string resParcial; 
    string res; 
    cin>>word; 
    for(int i=0; i< word.size(); i++){
        if(!(word[i] == 'W' && word[i+1] == 'U' && word[i+2] == 'B')){
            res+=word[i];
        } else {
            res+= " ";
            i +=2;
        }
    }
    cout<<res;
    return 0;
}