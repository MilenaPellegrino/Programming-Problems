// Encontrar los divisores de un numeros

vector<ll> res;
for(ll i = 1; i * i <= n; i++){
	if(n % i ==0){
		res.pb(i);
		if(i != n/i){
			res.pb(n/i);
		}
	}
}


// Encontrar los divisores de un numero teniendo la factorizacion en primos 

 void div_rec(vector<ll>& r, vector<pair<ll,int> >& f, int k, ll c){
	if(k==f.size()){r.pb(c);return;}
	fore(i,0,f[k].snd+1)div_rec(r,f,k+1,c),c*=f[k].fst;
}
vector<ll> divisors(vector<pair<ll,int> > f){
	vector<ll> r; // returns divisors given factorization
	div_rec(r,f,0,1);
	return r;
}
