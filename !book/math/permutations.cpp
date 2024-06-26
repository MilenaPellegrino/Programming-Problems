#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// ================ TEORICO SOBRE PERMUTACIONES ========================
    // La cantidad de permutaciones en un array de tamano n es n! 

    // En c++ esta la funcion next_permutation:
    /*
        
    */
 
// Dado un n, me imprime todas las permutaciones
void printPermutations(int n) {
    // Crear un vector con los números del 1 al n
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        nums[i] = i + 1;
    }

    // Imprimir las permutaciones usando next_permutation
    do {
        for (int i = 0; i < n; ++i) {
            cout << nums[i] << " ";
        }
        cout << endl;
    } while (next_permutation(nums.begin(), nums.end()));
}

// dado un n me dice la cantidad de permutaciones que tiene
long long countPermutations(int n) {
    // Inicializar un vector con los números del 1 al n
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        nums[i] = i + 1;
    }
    long long count = 0;
    do {
        ++count;
    } while (next_permutation(nums.begin(), nums.end()));

    return count;
}
int main() {
    // Ejemplos de uso
    int n = 5;
    printPermutations(n);
    long long permutations = countPermutations(n);

    cout << "Cantidad de permutaciones posibles para n = " << n << ": " << permutations << endl;
    return 0;
}
