#include<bits/stdc++.h>
#include<vector>
#include <algorithm> 
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
typedef long long ll;
using namespace std; 

string searchSubs(string word, string start, string end){
    string res;
    int inicio = 0; 
    while(true){
        int inicioA = word.find(start, inicio);
        if(inicioA == std::string::npos){
            break; 
        }
        inicioA += start.size(); 
        int finA = word.find(end, inicioA); 
        if(finA == std::string::npos){
            break; 
        }
        res += word.substr(inicioA, finA - inicioA) + " ";
        inicio = finA + end.size();
    }
    return res;
}
int main(){
    FIN; 
    string word;
    cin>>word;
    cout<<word;
    string word2 = searchSubs(word, "WUB", "WUB");
    cout<<word2;
    
    return 0;
}