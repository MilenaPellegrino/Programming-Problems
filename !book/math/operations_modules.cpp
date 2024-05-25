int add(int a, int b){
	a+=b;
	if(a>=MOD)a-=MOD;
	return a;
}

int sub(int a, int b){
	a-=b;
	if(a<0)a+=MOD;
	return a;
}

int mul(ll a, ll b){
	return a*b%MOD;
}