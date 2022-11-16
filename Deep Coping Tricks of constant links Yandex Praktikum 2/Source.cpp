#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*Сделайте то же самое не с конкретным тестовым запросом, а с результатом вызова функции ReadSearchQuery
Добавьте её в свой код:*/

string ReadSearchQuery() {
    string query;
    getline(cin, query);
    return query;
}

vector<string> SplitIntoWords(const string& text) {
    vector<string> words;
    string word;
    for (const char c : text) {
        if (c == ' ') {
            if (!word.empty()) {
                words.push_back(word);
                word.clear();
            }
        }
        else {
            word += c;
        }
    }
    if (!word.empty()) {
        words.push_back(word);
    }

    return words;
}

int main() {
    for (const string& word : SplitIntoWords(ReadSearchQuery())) {
        cout << '[' << word << "] "s;
    }
    cout << endl;
}