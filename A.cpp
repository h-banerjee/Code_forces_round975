#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n; // Length of the array
        
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i]; // Input array elements
        }

        // Find the maximum element
        int maxElement = *max_element(a.begin(), a.end());
        
        // The number of red elements we can choose = (n + 1) / 2
        int redCount = (n + 1) / 2;
        
        // The score is the maxElement + redCount
        cout << maxElement + redCount << endl;
    }
    
    return 0;
}
