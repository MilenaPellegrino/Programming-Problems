const ll MAXN=1e6+5;
ll fc[MAXN],fci[MAXN];

void factoriales(){
	fc[0]=1;
	fore(i,1,MAXN)fc[i]=mul(fc[i-1],i);
	fci[MAXN-1]=fpow(fc[MAXN-1],MOD-2);
	for(ll i=MAXN-2;i>=0;i--)fci[i]=mul(fci[i+1],i+1);
}
