#include <iostream>
#include <vector>
using namespace std;

vector<int> removeMultiples(const vector<int>& arr, int x) {
    vector<int> result;
    for (size_t i = 0; i < arr.size(); i++) {
        if (arr[i] % x != 0) {
            result.push_back(arr[i]);
        }
    }
    return result;
}

int main() {
    vector<int> array1 = {10, 19, 15, 18, 2, 17, 5, 21};
    int x1 = 5;
    vector<int> result1 = removeMultiples(array1, x1);
    cout << "Результат (Массив 1): ";
    for (size_t i = 0; i < result1.size(); i++) {
        cout << result1[i] << " ";
    }
    cout << endl;

    vector<int> array2 = {3, 6, 8, 3, 9};
    int x2 = 3;
    vector<int> result2 = removeMultiples(array2, x2);
    cout << "Результат (Массив 2): ";
    for (size_t i = 0; i < result2.size(); i++) {
        cout << result2[i] << " ";
    }
    cout << endl;

    return 0;
}
