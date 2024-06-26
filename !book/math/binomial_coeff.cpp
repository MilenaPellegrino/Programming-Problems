
// RECORDATORIO:
// Para usar esto y calcular los coeficiente binomiales llamar a factoriales() en el main
// Importante que sea en el main si no va a dar tle

// Lo que representa "comb" es el número de formas distintas de elegir k elementos de un conjunto de n elementos, sin tener en cuenta el orden.

const ll MAXN=1e6+5;

ll fc[MAXN],fci[MAXN];
int mul(ll a, ll b){
	return a*b%MOD;
}
ll binpow(ll a, ll b){ // iterativa (mas rapida)
	ll res=1;
	while(b>0){
		if(b%2==1){
			res=(res*a)%MOD;
		}
		a=(a*a)%MOD,b/=2;
	}
	return res;
}
void factoriales(){
	fc[0]=1;
	fore(i,1,MAXN)fc[i]=mul(fc[i-1],i);
	fci[MAXN-1]=binpow(fc[MAXN-1],MOD-2);
	for(ll i=MAXN-2;i>=0;i--)fci[i]=mul(fci[i+1],i+1);
}

ll comb(ll n, ll k){
	return mul(fc[n],mul(fci[k],fci[n-k]));
}