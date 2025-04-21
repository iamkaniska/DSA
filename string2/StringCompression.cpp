#include <iostream>
using namespace std;

int main() {
    string input;
    cin >> input;

    string result = "";
    int i = 0;

    while (i < input.length()) {
        char current = input[i];
        int count = 0;

        while (i < input.length() && input[i] == current) {
            count++;
            i++;
        }

        result += current;
        result += to_string(count);
    }

    cout << result << endl;

    return 0;
}
