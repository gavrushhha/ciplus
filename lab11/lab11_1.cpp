#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
    string inputFile = "f.txt";
    string evenFile = "g.txt";
    string oddFile = "h.txt";
    ifstream input(inputFile);
    if (!input) {
        cerr << "Ошибка: не удалось открыть файл " << inputFile << endl;
        return 1;
    }
    ofstream evenOutput(evenFile);
    ofstream oddOutput(oddFile);

    if (!evenOutput || !oddOutput) {
        cerr << "Ошибка: не удалось создать файлы для записи." << endl;
        return 1;
    }

    int number;
    while (input >> number) {
        if (number % 2 == 0) {
            evenOutput << number << " "; 
        } else {
            oddOutput << number << " ";
        }
    }

    input.close();
    evenOutput.close();
    oddOutput.close();

    cout << "Четные числа записаны в файл " << evenFile << endl;
    cout << "Нечетные числа записаны в файл " << oddFile << endl;

    return 0;
}
