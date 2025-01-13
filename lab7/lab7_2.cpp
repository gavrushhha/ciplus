#include <iostream>
#include <vector>
using namespace std;

vector<int> insertBeforeEndingWithX(const vector<int>& arr, int x, int y) {
    vector<int> result;
    for (size_t i = 0; i < arr.size(); i++) {
        if (arr[i] % 10 == x) {
            result.push_back(y);
        }
        result.push_back(arr[i]);
    }
    return result;
}

int main() {
    vector<int> array1 = {11, 5, 31, 3, 2, 11, 8, 3};
    int x1 = 1, y1 = 0;
    vector<int> result1 = insertBeforeEndingWithX(array1, x1, y1);
    cout << "Результат (Массив 1): ";
    for (size_t i = 0; i < result1.size(); i++) {
        cout << result1[i] << " ";
    }
    cout << endl;

    vector<int> array2 = {21, 11, 3, 41, 11};
    int x2 = 1, y2 = 0;
    vector<int> result2 = insertBeforeEndingWithX(array2, x2, y2);
    cout << "Результат (Массив 2): ";
    for (size_t i = 0; i < result2.size(); i++) {
        cout << result2[i] << " ";
    }
    cout << endl;

    return 0;
}
