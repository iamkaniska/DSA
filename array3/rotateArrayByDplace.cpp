#include <iostream>

using namespace std;

int main() {
    int n, D;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter number of places to rotate (D): ";
    cin >> D;
    for (int i = 0; i < D; i++) {
        int temp = arr[0];
        for (int j = 0; j < n - 1; j++) {
            arr[j] = arr[j + 1];
        }

        arr[n - 1] = temp;
    }

    cout << "Array after " << D << " left rotations: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
