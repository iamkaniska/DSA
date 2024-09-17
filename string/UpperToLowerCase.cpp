#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    bool capitalizeNext = true;
    for (int i = 0; i < input.length(); i++) {
        if (capitalizeNext && input[i] >= 'a' && input[i] <= 'z') {
            input[i] = input[i] - ('a' - 'A');  // Convert to uppercase
        }

        if (input[i] == ' ') {
            capitalizeNext = true;
        } else {
            capitalizeNext = false;
        }
    }

    cout << "Capitalized: " << input << endl;
    return 0;
}
