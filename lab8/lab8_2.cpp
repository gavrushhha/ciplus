#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> matrix = {
        {9, 2, 2, 2},
        {2, 1, 2, 1, 4},
        {4, 8, 7, 2},
        {9, 4, 2, 7, 4},
        {1, 1, 1, 1, 2}
    };

    cout << "Исходный массив:" << endl;
    for (const auto& row : matrix) {
        for (int elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }

    vector<vector<int>> result;
    for (const auto& row : matrix) {
        int sum = 0;
        for (int elem : row) {
            sum += elem;
        }
        if (sum < 10 || sum >= 100) {
            result.push_back(row);
        }
    }

    cout << "\nРезультат:" << endl;
    for (const auto& row : result) {
        for (int elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }

    return 0;
}
