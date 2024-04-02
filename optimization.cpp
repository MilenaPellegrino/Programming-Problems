
// Arreglo de sumas parciales sirve para encontrar subarreglos maximos
/*
    // Sin empezar de 0 
    fore(i, 0, n)cin>>a[i]; 
    fore(i, 1, n)a[i] += a[i-1]
*/
// kadane 
/*
int kadane(vector<int> const &arr){
    int max_so_far = 0;
    fore (i, 0, SZ(arr)){
        max_ending_here = max_ending_here + arr[i];
        max_ending_here = max(max_ending_here, 0);
        max_so_far = max(max_so_far, max_ending_here);
    }
    return max_so_far;
}
* */
// Obtener un subarreglo de tamano k cuya suma de sus elementos sea mayo 
// Tecnica Slide Windows
/*
int sum =0; 
int max_sum = 0;
for(int i=0; i<k; i++){
    sum+= v[i];s
}

for(int j=k; j<n; j++){
    sum += v[j] - v[j-k]; 
    if(max_sum < sum){
        max_sum = sum; 
        resI = j-k+1; 
        resJ = j
    }
}
*/

// OBtener un subarreglo en el cual la suma de 8
// Tecnica Slide Windows

/*
int sum = 0;
int x = 8; 
for(int i=0; i< v.size(); i++){
    while(j<v.size() && sum<x){
        sum += arr[j++];
    }
    if(sum == x){
        cout<<"El subarreglo: "<<"["<<i<<j-1<<]<<"suma: "<<x;
        return 0;
    }
    sum -= arr[i];
}
*/

// Implementacion de la busqeuda binaria a mano (tambien esta lower_bound)
/*
int l = 0; 
int r = 10000000 (o n)
while(l<=r){
    int m = (l+r) /2;
    if(can(m)){ // can es una funcion auxiliar (de lo quequeremos buscar)
        r = m -1;
    } else {
        l = m +1; 
    }
}
cout<<l;
*/

// Si quiero implementar busqueda binaria y devolver posicion: 
//  lower_bound(ALL(sumparc), b) - sumparc.begin();

// Encontrar el nums maximo repetidos de un array
// Con cubeta 
/*
    int n; cin>>n; 
    vector<int> cubeta(n+1);
    fore(i, 0, n){
        int ai;
        cin>>ai; 
        cubeta[ai]++;  
    }
    Imprimo el maximo elemento: 
    cout<<*max_element(ALL(cubeta))<<"\n";
*/

// Memoizacion hacer arreglo dp tecnica TOPDOWN
/*
int dp[105]; // iniciado con -1 (podes usar mempset)
ind D(int n){
    if(caso base) return caso base; 
    if(dp[n] != -1) return dp[n]
    return forma recursiva dp[n] = dp[n-1] + dp[n-2];
}

// Memoizacion hacer arreglo dp tecnioc BOTTOMUP
int d[105];
d[0] = d[1] = 1;
fore(i, 2, 105){
    d[n] = d[n-1] + d[n-2];
}
*/
