#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool check(int mid, vector<int>& weights, int days) {
        int n = weights.size();
        int m = mid;
        int count = 1;
        for (int i = 0; i < n; i++) {
            if (m >= weights[i]) {
                m -= weights[i];
            } else {
                count++;
                m = mid;
                m -= weights[i];
            }
        }
        return count <= days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int maxWeight = 0;
        int totalWeight = 0;

        for (int i = 0; i < n; i++) {
            if (maxWeight < weights[i]) {
                maxWeight = weights[i];
            }
            totalWeight += weights[i];
        }

        int low = maxWeight;
        int high = totalWeight;
        int lowCapacity = totalWeight;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (check(mid, weights, days)) {
                lowCapacity = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return lowCapacity;
    }
};

int main() {
    int n, days;
    cout << "Enter the number of packages: ";
    cin >> n;

    vector<int> weights(n);
    cout << "Enter the weights of the packages: ";
    for (int i = 0; i < n; i++) {
        cin >> weights[i];
    }
    cout << "Enter the number of days: ";
    cin >> days;
    Solution solution;
    int result = solution.shipWithinDays(weights, days);

    cout << "Minimum capacity needed to ship packages within " << days << " days is: " << result << endl;

    return 0;
}
