#include <iostream>

using namespace std;

string capitalizeLetters(string text);
string anagram(string text);
bool checkIfPalindrome(string text);
bool checkIfPalindromeV2(string text);


int main()
{
    string text;
    cout << "Podaj tekst: ";
    cin >> text;

    cout << "Podany tekst: " << text << "\n";
    cout << "Skapitalizowany tekst: " << capitalizeLetters(text) << "\n";
    cout << "Anagram: " << anagram(text) << "\n";

    if (checkIfPalindromeV2(text)) {
        cout << text << " jest palindromem \n";
    } else {
        cout << text << " nie jest palindromem \n";
    }
}

string capitalizeLetters(string text) {
    for (int i = 0; i < text.length(); i++) {
        char letter = text[i];

        if (letter != toupper(letter)) {
            text[i] = toupper(letter);
        }
    }

    return text;
}

string anagram(string text) {
    string anagram;

    for (int i = text.length() - 1; i >= 0; i--) {
        anagram += text[i];
    }

    return anagram;
}

bool checkIfPalindrome(string text) {
    string reversedText = anagram(text);

    for (int i = 0; i < text.length(); i++) {
        if (text[i] != reversedText[i]) {
            return false;
        }
    }

    return true;
}

bool checkIfPalindromeV2(string text) {
    int len = text.length();

    for (int i = 0; i < len; i++) {
        if (text[i] != text[len - 1 - i]) {
            return false;
        }
    }

    return true;
}


