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

    // Perform left rotation by D places
    for (int i = 0; i < D; i++) {
        // Store the first element
        int temp = arr[0];

        // Shift all elements to the left
        for (int j = 0; j < n - 1; j++) {
            arr[j] = arr[j + 1];
        }

        // Move the first element to the end
        arr[n - 1] = temp;
    }

    // Output the rotated array
    cout << "Array after " << D << " left rotations: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
