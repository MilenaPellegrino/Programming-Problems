#include<bits/stdc++.h>
using namespace std;
#define fore(i,a,b) for(int i=(a);i<(b);i++)
#define forr(i, a, b) for(int i=(b);i>(a);i--)
#define forn(e,c) for(const auto &e : (c))
#define db(x) cout<<#x<< " = "<<(x)<<endl
#define sz(x) ((int)x.size())
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define pp pop_back
#define fst first
#define snd second
#define str string
#define pri(x) cout << (x) << "\n"
#define mset(a,v) memset((a),(v),sizeof(a))
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vii = vector<int>;
using vll = vector<ll>;
using vpi = vector<pii>;
template<class T>ostream&operator<<(ostream&o,vector<T>const&v){o<<"[ ";for(auto const&x:v)o<<x<<" ";return o<<"]";}

// IMPLEMENTATION BINARY SEARCH
// Dado un vector y un numero x, la funcion me devuelve la posicion donde SE ENCONTRO X 
// Si no se encontro el valor, devuelve -1
int binsearch(vii &a, int x){
	int n = int(sz(a));
	int l=0, r = n-1;
	while(l<=r){
		int mid = (l+r)/2;
		if(a[mid] == x) return mid;
		else if(a[mid] < x) l = mid + 1;
		else r = mid - 1;
	}
	return -1;
}

// LOWER BOUND 
// Retorna un puntero que apunto al primer elemento del arreglo cuyo valor es mayor o igual a x 

// UPPER BOUND 
// Retorna un puntero que apunta al primer elemento del arreglo cuyo valor es mayor a x

// Si no lo encuentra me devuelve un iterador que apunta a uno mas del ultimo elemento del vector

// IMPLEMENTATION BINARY SEARCH WITH LOWER_BOUND 
int bsearch(vii &vec, int val){
	auto it = lower_bound(all(vec), val) - vec.begin();
	if(it != vec.end() && a[it] == val)return it; 
	else return -1;
}

// IMPLEMENTATION  
// COntar la cantidad de elementos iguales a un valor 
int count_bs(vii &v, int value){
	auto a = lower_bound(all(v), value);
	auto b = upper_bound(all(v), value);
	return b-a;
}
void solve(){
	vii a = {1, 2, 3, 5, 7, 9, 11};
	cout<<a<<endl;
	int val = 4; 
	db(val);
	auto it = lower_bound(all(a), val);
	if(it!= a.end()){
		cout << "Se encontró el valor " << val << " en la posición " << (it - a.begin()) << endl;
	} else {
		cout << "El valor "<<val<<" no se encontró, el elemento más cercano mayor o igual es "<< *it << " en la posición "<<(it - a.begin())<<endl;
	}
	
}
 
int main(){
    FIN; 
    int t = 1;
    //int t; cin>>t; 
    while(t--){
			solve();
	}
    return 0;
}
