const ll MAXN=1e6+5;
ll fc[MAXN],fci[MAXN];


ll binpow(ll a, ll b){ 
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
