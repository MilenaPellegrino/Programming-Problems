// IMprimir un vector template 
/*
template<typename T>
std::ostream& operator<<(std::ostream &os, const std::vector<T> &v) {
    os << "[";
    for (size_t i = 0; i < v.size(); ++i) {
        if (i) os << ", ";
        os << v[i];
    }
    os << "]";
    return os;
}
*/
// Cosas de estructuras de datos de c++ 
/*
Estructura set 
    set <char> letras; (usado en pangram)
    Es una estrcutura que tiene cosas en orden ascedente esas cosas son lo <aca> 
    Las ordena automaticamente en orden ascedente 
    Para agregar cosas al set es letras.insert('a')
*/

// Imprimir maximo elemento de un vector
//cout<<*max_element(ALL(nameVector))<<"\n";

// _________________ COSAS CON STRING ______________________

// Pasar la cadena a minuscula o mayuscula  funcion hecha 
/* 
std::string convLowerCase(const std::string& str) {
    std::string resultado = str;
    
    // Utilizamos std::transform para aplicar std::tolower a cada carácter del string
    std::transform(resultado.begin(), resultado.end(), resultado.begin(),
                   [](unsigned char c) { return std::tolower(c); });
    
    return resultado;
}
Si queres convertir a mayuscula en vez de tolower es toupper
*/

// Verifica si una palabra esta en un string 
/*
bool palabraEnString(const std::string& cadena, const std::string& palabra) {
    // Busca la palabra en la cadena
    size_t posicion = cadena.find(palabra);

    // Si encuentra la palabra, devuelve true
    return posicion != std::string::npos;
}


*/

// Cuenta la cantidad de veces uqe aparece una palabra en un string
/*
int contarOcurrencias(const std::string& cadena, const std::string& palabra) {
    int contador = 0;
    size_t posicion = cadena.find(palabra);

    while (posicion != std::string::npos) {
        // Incrementa el contador cuando encuentra la palabra
        contador++;

        // Busca la siguiente ocurrencia a partir de la posición actual
        posicion = cadena.find(palabra, posicion + palabra.length());
    }

    return contador;
}
*/

// Ver si un caracter o algunas esta en un string
bool contiene(const char* palabra) {
    for (int i = 0; i < strlen(palabra); ++i) {
        if (palabra[i] == 'H' || palabra[i] == 'Q' || palabra[i] == '9') {
            return true;  
        }
    }
    return false;  
}

// Eliminar el ultimo caracter de una cadena de texto 
palabra = palabra.substr(0, palabra.size() - 1);

// Eliminar primer caracter de un string 
/*
string eliminarPrimerCaracter(const string& cadena) {
    // Verificar si la cadena tiene al menos un carácter
    if (!cadena.empty()) {
        // Devolver la cadena sin el primer carácter
        return cadena.substr(1);
    } else {
        // Devolver una cadena vacía si la cadena está vacía
        return "";
    }
}
*/

// Pasar un numero a string 
/*
int numero = 42;
string cadena = to_string(numero);
*/

// Dada una letra del abecedario me de la posicion, a = 1, b=2, z = 26 
/*
int chanu(char n){
    int r = n - 'a'; 
    return r + 1;
}
*/

// _________________ COSAS CON NUMEROS ______________________ 

// Ordenar de mayor a menor
// sort(ALL(a), greater<int>());

// Verifica si un numero es divisible por otro 
bool esDivisible(int numero, int divisor) {
    // Verificar si el número es divisible por el divisor
    return (numero % divisor == 0);
}


// ENcontrar el num max o min de un vector
/*
Todavia no lo entiendo muy bien pero funciona. 
EJemplo de eso en expresion.cpp
    -- auto itMax = max_element(vector.begin(), vector.end());
    -- int numMax = *itMax;
    
*/


//Encontrar la posicion del num min o max de un vector
/*
    EL PRIMERO DESDE LA IZQUIERDA
    auto itMax = max_element(fila.begin(), fila.end());
    int posMax = distance(fila.begin(), itMax);

    EL PRIMERO DESDE LA DERECHA
    int min = numeros[0];  // Suponemos que el primer elemento es el mínimo
    int posMin = 0;

    for (int i = 1; i < numeros.size(); ++i) {
        if (numeros[i] <= min) {
            min = numeros[i];
            posMin = i;
        }
    }
*/

// FUncion que dado dos numeros me devuelve el vector con los multiplos 
// si a = 10, b = 2, me devuelve un vector c con 2 4 6 8 10

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


/*
MEMPSET: Llenar un bloque de memoria con un valor especifico 
memset(array, num_con_cual_llenar, sizeof(array)); 

*/

// funcion factorial 
// int fact(int n){
		// if(n== 0)return 1;
		// if(dp[n]!=-1){
			// return dp[n]; 
		// } else {
			// dp[n] = n * fact(n-1);
		// }
		// return dp[n];
// }
