#include <iostream>
#include <vector>

using namespace std;

pair<int, pair<int, int>> maxSubarraySum(const vector<int>& nums) {
    int n = nums.size();
    int sumaActual = 0, sumaMaxima = nums[0];
    int inicio = 0, fin = 0, inicioTemp = 0;

    for (int i = 0; i < n; ++i) {
        sumaActual += nums[i];

        if (sumaActual > sumaMaxima) {
            sumaMaxima = sumaActual;
            inicio = inicioTemp;
            fin = i;
        }

        if (sumaActual < 0) {
            sumaActual = 0;
            inicioTemp = i + 1;
        }
    }

    return {sumaMaxima, {inicio, fin}};
}

int main() {
    int n; cin>>n;
    vector<int> nums;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        nums.push_back(a);
    }
    auto resultado = maxSubarraySum(nums);

    cout << "La suma máxima es: " << resultado.first << endl;
    cout << "El subarreglo con suma máxima es: [";
    for (int i = resultado.second.first; i <= resultado.second.second; ++i) {
        cout << nums[i];
        if (i < resultado.second.second) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}
