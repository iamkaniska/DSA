#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    int first = 0, second = 1, next, sum = 0;

    cout << "Fibonacci Series: ";
    
    for (int i = 0; i < n; i++) {
        cout << first << " ";
        sum += first;
        next = first + second;
        first = second;
        second = next;
    }

    cout << "\nSum of Fibonacci series: " << sum << endl;

    return 0;
}
