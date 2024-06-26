
// Ver si un numero es primo

bool esPrimo(ll num) {
    if (num <= 1) {
        return false;
    }
    for (ll i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;  
        }
    }
    return true;  
}


// CRIBA DE ERASTOTENES
// cr contiene -1 si es un primo y sino contiene el menor divisor primo 
// COMPLEJIDAD de init_sieve() = O(n log log n)

// fact me devuelve un mapa donde la clave son los factores y los valores los exponentes
// COMPLEJIDAD de fact = O(log n)

int cr[MAXN]; // -1 if prime, some not trivial divisor if not
void init_sieve(){
	memset(cr,-1,sizeof(cr));
	fore(i,2,MAXN)if(cr[i]<0)for(ll j=1LL*i*i;j<MAXN;j+=i)cr[j]=i;
}
map<int,int> fact(int n){  // must call init_cribe before
	map<int,int> r;
	while(cr[n]>=0)r[cr[n]]++,n/=cr[n];
	if(n>1)r[n]++;
	return r;
}


/*
descomponer un número n en sus factores primos y devolver un vector de pares, 
donde cada par contiene un factor primo y su exponente 
(es decir, cuántas veces ese factor primo divide a nn).
*/

// COMPLEJIDAD: o(raiz de n)

vector<pair<ll, ll>> res; 
for (ll i = 2; i * i <= n; i++) {
    if (n % i == 0) {
        res.push_back({i, 0});
        while (n % i == 0) {
            n /= i;
            res.back().second++;
        }
    }
}
if (n > 1) {
    res.push_back({n, 1});
}
return res;

/*
EJEMPLO: 
si n = 100 
res = {{2, 2}, {5, 2}}

ya que la factorizacion prima de 100 es 2^2 * 2^5
*/