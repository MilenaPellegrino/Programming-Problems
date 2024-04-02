
Funcion factorial 
/*
 int fact(int n){
		// if(n== 0)return 1;
		// if(dp[n]!=-1){
			// return dp[n]; 
		// } else {
			// dp[n] = n * fact(n-1);
		// }
		// return dp[n];
 }
 */
 
Elevar a ^ b
/*
ll power(ll base, ll exponent, ll mod = -1) {
    if (exponent == 0) {
        return 1;
    } else if (exponent % 2 == 0) {
        ll half_pow = power(base, exponent / 2, mod);
        return (mod == -1) ? half_pow * half_pow : (half_pow * half_pow) % mod;
    } else {
        ll half_pow = power(base, (exponent - 1) / 2, mod);
        return (mod == -1) ? base * half_pow * half_pow : (base * half_pow * half_pow) % mod;
    }
}
*/

Dividir dos enteros con redondeo hacia abajo
/*
 * q es el cociente y r es el resto; 
void floordiv(ll x, ll y, ll& q, ll& r) { // (for negative x)
	q=x/y;r=x%y;
	if((r!=0)&&((r<0)!=(y<0)))q--,r+=y;
}
* 
ll div(ll x, ll y) { 
	ll res = (x + y - 1) / y;
	return res;
}
*/
EL numero del exponente del factor de un num en la factorizacion de otro 
/*

ll cantFactores(ll n, ll f){
	ll res = 0;
	ll temp = f; 
	while(temp<=n){
		res += n/temp; 
		temp *=f;
	}
	return res;
}
*/
Encontrar el minimo numero que es divisible por b a partir de un num a 
/*
Por ejemplo con 10/4 me diria 12 que es el primero numero a partir de a por el cual es divisible
si a no es divisible por b, entonces el siguiente número que es divisible por b es:
 a + (b - a % b). 
 Este enfoque garantiza que el resultado sea divisible por b con la menor cantidad de incrementos posible.
*/

Encontrar los divisores de un numeros
/*
vector<ll> res;
for(ll i = 1; i * i <= n; i++){
	if(n % i ==0){
		res.pb(i);
		if(i != n/i){
			res.pb(n/i);
		}
	}
}
*/

 Encontrar los divisores de un numero teniendo la factorizacion en primos 
/*
 void div_rec(vector<ll>& r, vector<pair<ll,int> >& f, int k, ll c){
	if(k==f.size()){r.pb(c);return;}
	fore(i,0,f[k].snd+1)div_rec(r,f,k+1,c),c*=f[k].fst;
}
vector<ll> divisors(vector<pair<ll,int> > f){
	vector<ll> r; // returns divisors given factorization
	div_rec(r,f,0,1);
	return r;
}
*/

Econtrar la factorizacion prima de un numero 
/*
vector<pair<ll,ll>> res; 
* for(ll i = 2; i * i <= n; i++){
	if(n % i ==0){
		res.pb({i, 0});
		while(n % i == 0){
			n/=i; res.back().snd ++;
		}
	}
	if(n > 1){res.pb({n,1});}
}
* return res;
*/

Ver si un numero es primo
/*
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
*/
Criba de estratones 
/*
 * O(n  log n) 

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
*/

Calcular el inverso multiplicativo modular 
/*
ll inv(ll a, ll mod) { //inverse of a modulo mod
	assert(gcd(a,mod)==1);
	pl sol = extendedEuclid(a,mod);
	return ((sol.fst%mod)+mod)%mod;
}
*/

 Encontrar el MCD con euclides
/*
ll euclid(ll a, ll b, ll& x, ll& y){ // a*(x+k*(b/d))+b*(y-k*(a/d))=d
	if(!b){x=1;y=0;return a;}          // (for any k)
	ll d=euclid(b,a%b,x,y);
	ll t=y;y=x-(a/b)*y;x=t;
	return d;
}
*/

 Encontrar las raices de un polinomio real de cualquier grado 
/*
double pget(poly<>& p, int k){return k<p.c.size()?p[k]:0;}
poly<> bairstow(poly<> p){ // returns polynomial of degree 2 that
	int n=p.c.size()-1;    // divides p
	assert(n>=3&&abs(p.c.back())>EPS);
	double u=p[n-1]/p[n],v=p[n-2]/p[n];
	fore(_,0,ITER){
		auto w=polydiv(p,{v,u,1});
		poly<> q=w.fst,r0=w.snd;
		poly<> r1=polydiv(q,{v,u,1}).snd;
		double c=pget(r0,1),d=pget(r0,0),g=pget(r1,1),h=pget(r1,0);
		double det=1/(v*g*g+h*(h-u*g)),uu=u;
		u-=det*(-h*c+g*d);v-=det*(-g*v*c+(g*uu-h)*d);

	}
	return {v,u,1};
}
void addr(vector<double>& r, poly<>& p){
	assert(p.c.size()<=3);
	if(p.c.size()<=1)return;
	if(p.c.size()==2)r.pb(-p[0]/p[1]);
	if(p.c.size()==3){
		double a=p[2],b=p[1],c=p[0];
		double d=b*b-4*a*c;
		if(d<-0.1)return; // huge epsilon because of bad precision
		d=d>0?sqrt(d):0;r.pb((-b-d)/2/a);r.pb((-b+d)/2/a);
	}
}
vector<double> roots(poly<> p){
	while(!p.c.empty()&&abs(p.c.back())<EPS)p.c.pop_back();
	fore(i,0,p.c.size())p[i]/=p.c.back();
	vector<double> r;int n;
	while((n=p.c.size()-1)>=3){
		poly<> q=bairstow(p);addr(r,q);
		p=polydiv(p,q).fst;
		while(p.c.size()>n-1)p.c.pop_back();
	}
	addr(r,p);
	return r;
}

 */
 
 Ordenar de mayor a menor 
/*
sort(ALL(a), greater<int>());*/
 
Obtener los multiplos 
/*
vector<ll> obtMult(ll a, ll b){
    vector<ll> res; 
    fore(i, 1, a+1){
        if(i%b == 0){
            res.pb(i);
        }
    }
    return res; 
}\
*/

La suma de 1 +2 + 3 ... + n
/*
 n(n+1) / 2
*/

La suma de 2^1 + 2^2 + .. + 2^n
/*
2^(n+1) - 1
*/

La suma de x^1 + x^2 + .. + x^n 
/*
 1 - x^(n+1)) / (1-x) 
*/
