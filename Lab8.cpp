//12. Напишіть функцію, яка приймає рядок std::string та символ, і повертає
//кількість входжень цього символу в рядок.
#include <iostream>
#include <string>
using namespace std;

int CountChar(const string& text, char ch) {
    int count = 0;
    for (char currentChar : text) {
    if ((currentChar == ch) && ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))) {
       ++count;
}
}
    return count;
}

int main() {
    string text;
    char symbol;

    cout << "Type a string: ";
    getline(cin, text);

    cout << "Type a character to count: ";
    cin >> symbol;

    if (!((symbol >= 'a' && symbol <= 'z') || (symbol >= 'A' && symbol <= 'Z') || (symbol >= '0' && symbol <= '9'))) {
        cout << "The character is not a letter or digit." << endl;
        cout << "Exiting..." << endl;
        return 0;
    }

    int ok = CountChar(text, symbol);

    cout << "The character '" << symbol << "' appears " << ok << " times in the text." << endl;

    return 0;
}
