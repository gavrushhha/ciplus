#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 5, 9, 6, 2, 7, 4, 3};
    int interval_min = 2, interval_max = 7; 
    int sum = 0; 
    int count = 0;

    for (int num : arr) {
        if (num % 2 != 0 && (num < interval_min || num > interval_max)) {
            sum += num;
            count++;
        }
    }
    if (count > 0) {
        double average = static_cast<double>(sum) / count;
        cout << "Среднее арифметическое: " << average << endl;
    } else {
        cout << "Таких элементов нет" << endl;
    }
    return 0;
}
