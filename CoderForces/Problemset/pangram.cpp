#include <iostream>
#include <set>
#include <cctype>

using namespace std;

bool esPangrama(const string& palabra) {
    set<char> letrasPresentes;

    for (char letra : palabra) {
            letrasPresentes.insert(tolower(letra));
    }

    return letrasPresentes.size() == 26; // Un pangrama tiene 26 letras distintas
}

int main() {
    int n; 
    cin>>n;
    string word;
    cin >> word;

    if (esPangrama(word)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

