#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

struct Product {
    string name;       
    double price;      
    int storageTerm;   
    string grade;      
    int releaseDay;    
    int releaseMonth; 
    int releaseYear;   
    int expiryDay;     
    int expiryMonth;   
    int expiryYear;   
};

int main() {
    string inputFile = "products.txt";
    string outputFile = "expiring_products.txt";
    ifstream input(inputFile);
    if (!input) {
        cerr << "Ошибка: не удалось открыть файл " << inputFile << endl;
        return 1;
    }

    vector<Product> products;
    string line;
    while (getline(input, line)) {
        stringstream ss(line);
        Product product;
        ss >> product.name >> product.price >> product.storageTerm >> product.grade
           >> product.releaseDay >> product.releaseMonth >> product.releaseYear
           >> product.expiryDay >> product.expiryMonth >> product.expiryYear;
        products.push_back(product);
    }
    input.close();

    int currentMonth = 12;
    int currentYear = 2024;
    vector<Product> expiringProducts;
    for (const auto& product : products) {
        if (product.expiryMonth == currentMonth && product.expiryYear == currentYear) {
            expiringProducts.push_back(product);
        }
    }
    ofstream output(outputFile);
    if (!output) {
        cerr << "Ошибка: не удалось создать файл " << outputFile << endl;
        return 1;
    }

    for (const auto& product : expiringProducts) {
        output << "Наименование: " << product.name
               << ", Стоимость: " << product.price
               << ", Срок хранения: " << product.storageTerm
               << ", Сорт: " << product.grade
               << ", Дата выпуска: " << product.releaseDay << "/" << product.releaseMonth << "/" << product.releaseYear
               << ", Срок годности: " << product.expiryDay << "/" << product.expiryMonth << "/" << product.expiryYear
               << endl;
    }

    output.close();


    return 0;
}
