#include <iostream>
#include <sstream>
#include <set>
#include <map>
#include <cctype>
using namespace std;

int main() {
    string text;
    cout << "Введите текст: ";
    getline(cin, text);

    map<char, int> letterCount;
    istringstream stream(text); 
    string word;
    while (stream >> word) {
        set<char> uniqueLetters; 
        for (size_t i = 0; i < word.size(); i++) {
            char c = word[i];
            if (isalpha(c)) { 
                uniqueLetters.insert(tolower(c));
            }
        }

        for (auto it = uniqueLetters.begin(); it != uniqueLetters.end(); ++it) {
            letterCount[*it]++;
        }
    }

    int maxCount = 0;
    for (auto it = letterCount.begin(); it != letterCount.end(); ++it) {
        maxCount = max(maxCount, it->second);
    }

    cout << "Буквы, которые встречаются в максимальном количестве слов: ";
    for (auto it = letterCount.begin(); it != letterCount.end(); ++it) {
        if (it->second == maxCount) {
            cout << it->first << " ";
        }
    }
    cout << endl;

    return 0;
}
