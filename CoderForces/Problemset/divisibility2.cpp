#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    vector<int> res;
    while (t--) {
        int a, b;
        cin >> a >> b; // a= 10, b=4

        if (a % b == 0) {
            res.push_back(0);  // Si a ya es divisible por b, el resultado es 0.
        } else {
            int nextMultiple = a + (b - a % b); 
            res.push_back(nextMultiple - a); 
        }
    }

    for (int elem : res) {
        cout << elem << '\n';
    }

    return 0;
}
