#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Hotel {
    string fullName;    
    int birthYear;       
    int days;             
    int roomCategory;    
};

int main() {
    int numTourists; 
    cout << "Введите количество туристов: ";
    cin >> numTourists;

    vector<Hotel> tourists(numTourists);
    for (int i = 0; i < numTourists; ++i) {
        cout << "Введите данные для туриста #" << (i + 1) << ":\n";
        cin.ignore();
        cout << "ФИО: ";
        getline(cin, tourists[i].fullName);
        cout << "Год рождения: ";
        cin >> tourists[i].birthYear;
        cout << "Количество дней пребывания: ";
        cin >> tourists[i].days;
        cout << "Категория номера (1 - 3): ";
        cin >> tourists[i].roomCategory;
        while (tourists[i].roomCategory < 1 || tourists[i].roomCategory > 3) {
            cout << "Неверная категория номера. Введите значение от 1 до 3: ";
            cin >> tourists[i].roomCategory;
        }
    }
    double roomPrices[3];
    cout << "\nВведите стоимость номеров для категорий 1, 2, и 3:\n";
    for (int i = 0; i < 3; ++i) {
        cout << "Стоимость для категории " << (i + 1) << ": ";
        cin >> roomPrices[i];
    }
    cout << "\nСтоимость проживания каждого туриста:\n";
    for (int i = 0; i < numTourists; ++i) {
        double cost = tourists[i].days * roomPrices[tourists[i].roomCategory - 1];
        cout << "Турист: " << tourists[i].fullName
             << ", Год рождения: " << tourists[i].birthYear
             << ", Пребывание: " << tourists[i].days << " дней, "
             << "Категория номера: " << tourists[i].roomCategory
             << ", Общая стоимость: " << cost << " руб.\n";
    }

    return 0;
}
