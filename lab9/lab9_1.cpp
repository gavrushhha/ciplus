#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Введите строку, содержащую латинские буквы и цифры: ";
    cin >> input;

    string letters = "";
    string digits = "";

    for (size_t i = 0; i < input.size(); i++) {
        if (isalpha(input[i])) {
            letters += input[i];
        } else if (isdigit(input[i])) {
            digits += input[i];
        }
    }
    cout << "Результат: " << letters + digits << endl;

    return 0;
}
