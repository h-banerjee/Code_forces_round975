#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t; // Read number of test cases
    while (t--) {
        int n;
        cin >> n; // Read number of cities
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i]; // Read deadlines for each city
        }

        int count = 0; // Count of valid starting cities
        for (int start = 0; start < n; ++start) { // Try starting from each city
            int currentTime = 1;
            bool canWin = true;
            int left = start, right = start; // Initially conquer the starting city

            while (left >= 0 || right < n) {
                if (left >= 0 && a[left] >= currentTime) {
                    currentTime++;
                    left--;
                } else if (right < n && a[right] >= currentTime) {
                    currentTime++;
                    right++;
                } else {
                    canWin = false;
                    break;
                }
            }

            if (canWin) {
                count++; // If it's possible to win, increment the count
            }
        }

        cout << count << endl; // Output the count for the current test case
    }
    return 0;
}
