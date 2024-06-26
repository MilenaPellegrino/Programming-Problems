
// Cuenta la cantidad de veces que un numero f es un factor de un numero n en su descomposicion en factores primos
ll cantFactores(ll n, ll f){
	ll res = 0;
	ll temp = f; 
	while(temp<=n){
		res += n/temp; 
		temp *=f;
	}
	return res;
}


/*
EJEMPLO: queremos contar cuentas veces el numero 5 aparece como factor en los numero del 1 al 100 

llamamos a cantFactores(100, 5)

*/