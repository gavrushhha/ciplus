#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generateMatrix(int n) {
    vector<vector<int>> matrix(n, vector<int>(n));
    int value = n * n - 1;

    for (int col = 0; col < n; ++col) {
        if (col % 2 == 0) {
            for (int row = n - 1; row >= 0; --row) {
                matrix[row][col] = value--;
            }
        } else {
            for (int row = 0; row < n; ++row) {
                matrix[row][col] = value--;
            }
        }
    }

    return matrix;
}

void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 5;
    vector<vector<int>> result = generateMatrix(n);

    cout << "Результирующая матрица:" << endl;
    printMatrix(result);

    return 0;
}
