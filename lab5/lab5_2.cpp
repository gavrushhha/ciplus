#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr1 = {1, 5, 9, 1, 2, 7, 1, 3}; 
    vector<int> arr2 = {2, 5, 10, 5, 8, 7, 8};  
    vector<vector<int>> arrays = {arr1, arr2};

    for (int i = 0; i < arrays.size(); ++i) {
        vector<int>& arr = arrays[i];
        int n = arr.size();
        if (n % 2 == 0) {
            int mid1 = n / 2 - 1;
            int mid2 = n / 2;
            swap(arr[mid1], arr[mid2]);
        } 
        else {
            int mid = n / 2;
            swap(arr[0], arr[mid]);
        }
        for (int num : arr) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
