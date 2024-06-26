
// con modulo
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

// sin modulo 
ll binpow(ll a, ll b) { 
    ll res = 1;
    while (b > 0) {
        if (b&1)
            res = res * a; 
        a = a * a; 
        b >>= 1;
    }
    return res;
}
