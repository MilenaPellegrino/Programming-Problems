#include <iostream>
#include <algorithm>

typedef long long ll;
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;

    // Utilizar solo el k-ésimo elemento después de la partición
    int res;
    for (int i = 1; i <= n; ++i) {
        if (i % 2 != 0) {
            --k;
            if (k == 0) {
                res = i;
                break;
            }
        }
    }
    cout<<res;
    return 0;
}
