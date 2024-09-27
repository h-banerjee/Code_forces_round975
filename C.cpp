#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long k; // Only here to handle large inputs, but results will be in int
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int left = 1, right = n + k, answer = 0;
        while (left <= right) {
            int mid = (left + right) / 2;
            long long total_needed = 0;

            for (int i = 0; i < n; ++i) {
                if (a[i] < mid) {
                    total_needed += (mid - a[i]);
                }
            }

            if (total_needed <= k) {
                answer = mid; // mid is possible
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        cout << answer << endl;
    }
    return 0;
}
