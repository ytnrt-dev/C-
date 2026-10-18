#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int countVowels(string s) {
    int count = 0;

    for (int i = 0; i < s.length(); i++) {
        char c = tolower(s[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            count++;
    }
    return count;
}

int main () {
    string word;

    cout << "Enter a word: ";
    cin >> word;

    int result = countVowels(word);

    cout << "Number of vowels in \"" << word << "\": " << result << endl;
    return 0;
}