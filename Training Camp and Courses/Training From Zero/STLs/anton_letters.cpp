#include<bits/stdc++.h>
#define pb push_back
#define fst first
#define snd second
#define str string
#define fore(i,a,b) for(int i=(a);i<(b);i++)
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
typedef long long ll;
using namespace std; 

bool contieneC (vector<char> palabra, char c){
    for(int i =0; i<palabra.size(); i++){
        if(palabra[i] == c){
            return true;
        }
    }
    return false;
}
int main(){
    FIN; 
   vector<char> conj; 
   char d;
   int res = 0;
   cin>>d;
   conj.pb(d);
   while(d != '}'){
        cin>>d; 
        if(contieneC(conj, d) == false && d!=','){
            //cout<<"entr al if "<<endl;
            res +=1;
            conj.pb(d); 
        } else{
             conj.pb(d);  
        } 
   }
   cout<<res-1;// Reessto uno porque estoy contando el corchete 
    return 0;
}