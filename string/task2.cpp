// Online C compiler to run C program online
#include <iostream>
#include <string>
using namespace std;
int main() {
    string inputString;

    // Get input from the user
    cout << "Enter a string: ";
    cin >> inputString;

    // Print the vowels in the string
    cout << "Vowels in the string: ";
    for (char ch : inputString) {
        // Check if the character is a vowel (case-insensitive)
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            cout << ch << " ";
        }
    }

    cout << endl;

    return 0;
}
