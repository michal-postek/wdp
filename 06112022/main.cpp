#include <iostream>
#include <string>

using namespace std;

string arrayToText(char chars[]);
int countCharInText(string text, string character);
int countAllLettersInText(string text);
string encryptText(string text, int increase);
string encyptTextBySwappingLetters(string text);
int countVowelsInText(string text);

int main()
{
    string name = "Kowalski Jan";

    int lastNameLength = name.find(" ");
    int firstNameLength = name.length() - lastNameLength;
    string lastName = name.substr(0, lastNameLength);
    string firstName = name.substr(lastNameLength + 1);
    string initials = lastName.substr(0, 1) + firstName.substr(0, 1);

    string swappedNames = name;
    swappedNames
        .replace(0, lastNameLength, firstName)
        .replace(firstNameLength + 1, firstNameLength, lastName);

    //todo anagram

    string swappedLetters = name;
    swappedLetters
        .replace(0, 1, initials.substr(1, 1))
        .replace(lastNameLength + 1, 1, initials.substr(0, 1));

    cout << "Nazwisko i Imie: " << name << "\n";
    cout << "Nazwisko: " << lastName << "\n";
    cout << "Imie: " << firstName << "\n";
    cout << "Imie i Nazwisko: " << swappedNames << "\n";
    cout << "Inicjaly: " << initials << "\n";
    cout << "Nazwisko i imie z zamienionymi literami: " << swappedLetters << "\n";

    char chars[3] = {'a','b','c'};
    cout << "Tekst z tablicy: " << arrayToText(chars) << "\n";

    string text = "Lorem Ipsum is simply dummy text.";
    string text2 = "abcde";
    cout << "Przykladowy tekst: " << text << "\n";
    cout << "Ilosc `i` w podanym tekscie: " << countCharInText(text, "i") << "\n";
    cout << "Ilosc liter i liczb w podanym tekscie: " << countAllLettersInText(text) << "\n";
    cout << "Zaszyfrowany tekst: " << encryptText(text, 2) << "\n";
    cout << "Zaszyfrowany tekst 2: " << encyptTextBySwappingLetters(text) << "\n";
    cout << "Liczba samogłosek w tekście: " << countVowelsInText(text2) << "\n";
}

string arrayToText(char chars[]) {
    int i;
    string text;

    for (i =0; i < sizeof(chars); i++) {
        text += chars[i];
    }

    return text;
}

int countCharInText(string text, string character) {
    int i, counter = 0;

    for (i = 0; i < text.length(); i++) {
        if (text.substr(i, 1) == character) {
            counter++;
        }
    }

    return counter;
}

int countAllLettersInText(string text) {
    int i, charCode, counter = 0;

    for (int i = 0; i < text.length(); i++) {
        charCode = int(text[i]);
        bool isSmallLetter = charCode >= 97 && charCode <= 122;
        bool isBigLetter = charCode >= 97 && charCode <= 122;
        bool isNumber = charCode >= 48 && charCode <= 57;

        if (!isSmallLetter && !isBigLetter && !isNumber) {
            counter++;
        }
    }

    return text.length() - counter;
}

string encryptText(string text, int increase) {
    string encryptedText;

    for (int i = 0; i < text.length(); i++) {
        encryptedText += char(int(text[i]) + 2);
    }

    return encryptedText;
}

string encyptTextBySwappingLetters(string text) {
    string encryptedText;
    int i, length = text.length();

    if (length % 2 != 0 ) {
        length--;
    }

    for (i = 0; i < length; i += 2) {
        encryptedText += text.substr(i + 1, 1);
        encryptedText += text.substr(i, 1);
    }

    return encryptedText;
}

int countVowelsInText(string text) {
    int i, counter = 0;

    //todo

    return counter;
}
