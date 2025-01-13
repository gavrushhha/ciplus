#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 1, 4, 1},
        {2, 2, 2, 4, 1},
        {4, 4, 4, 4, 1},
        {4, 4, 4, 4, 4},
        {5, 6, 6, 4, 1}
    };
    cout << "Исходный массив:" << endl;
    for (const auto& row : matrix) {
        for (int elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }
    size_t cols = matrix[0].size();
    for (size_t col = 0; col < cols; col++) {
        bool isEven = true;
        for (size_t row = 0; row < matrix.size(); row++) {
            if (matrix[row][col] % 2 != 0) {
                isEven = false;
                break;
            }
        }
        if (isEven) {
            for (size_t row = 0; row < matrix.size(); row++) {
                matrix[row].insert(matrix[row].begin() + col + 1, matrix[row][col]);
            }
            col++;
            cols++;
        }
    }
    cout << "\nРезультат:" << endl;
    for (const auto& row : matrix) {
        for (int elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }

    return 0;
}
