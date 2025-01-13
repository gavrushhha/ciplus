#include <iostream>
#include <vector>
using namespace std;

void replaceEvenRows(vector<vector<int>>& matrix, const vector<int>& X) {
    for (size_t i = 0; i < matrix.size(); i += 2) {
        matrix[i] = X;
    }
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
    vector<vector<int>> matrix = {
        {1, 1, 1, 1},
        {2, 2, 2, 2},
        {3, 3, 3, 3},
        {4, 4, 4, 4},
        {5, 5, 5, 5}
    };
    vector<int> X = {0, 0, 0, 0};
    cout << "Исходная матрица:" << endl;
    printMatrix(matrix);
    replaceEvenRows(matrix, X);
    cout << "Результат:" << endl;
    printMatrix(matrix);

    return 0;
}
