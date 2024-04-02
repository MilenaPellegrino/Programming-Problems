#include<bits/stdc++.h>
#include<vector>
#include <algorithm> 
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
typedef long long ll;
using namespace std; 

int main(){
    FIN; 
    int a, b, c; 
    cin>>a>>b>>c;
    vector<int> res;
    int r1, r2, r3, r4, r5, r6; 
    r1 = a + b + c; 
    r2 = a + (b * c);
    r3 = a * b * c;
    r4 = a * (b + c);
    r5 = (a + b) * c; 
    r6 = (a * b) + c; 
    res.push_back(r1);
    res.push_back(r2);
    res.push_back(r3);
    res.push_back(r4);
    res.push_back(r5);
    res.push_back(r6);
    auto itMax = max_element(res.begin(), res.end());
    int numMax = *itMax;
    cout<<numMax; 

    return 0;
}