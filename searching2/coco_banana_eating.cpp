//coco eating banana 
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

long long calculateTotalHours(const vector<int>& piles, int hourly) {
    long long totalHours = 0;
    for (int bananas : piles) {
        totalHours += (bananas + hourly - 1) / hourly; // Avoids using ceil
    }
    return totalHours;
}

int minEatingSpeed(vector<int>& piles, int h) {
    int maxBananas = *max_element(piles.begin(), piles.end());
    int low = 1, high = maxBananas, result = maxBananas;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        long long totalHours = calculateTotalHours(piles, mid);

        if (totalHours <= h) {
            result = mid; // Update result
            high = mid - 1; // Try for a smaller speed
        } else {
            low = mid + 1; // Increase speed
        }
    }

    return result;
}

int main() {
    int n, h;
    cout << "Enter the number of piles: ";
    cin >> n;

    vector<int> piles(n);
    cout << "Enter the number of bananas in each pile:\n";
    for (int i = 0; i < n; i++) {
        cin >> piles[i];
    }

    cout << "Enter the number of hours available: ";
    cin >> h;

    int result = minEatingSpeed(piles, h);
    cout << "The minimum eating speed is: " << result << endl;

    return 0;
}
