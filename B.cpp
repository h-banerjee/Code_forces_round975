#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void solve() {
    int t;
    cin >> t; 
    while (t--) {
        int n, q;
        cin >> n >> q; 
        vector<int> points(n);
        for (int i = 0; i < n; i++) {
            cin >> points[i]; 
        }


        unordered_map<int, int> frequency;

        for (int i = 0; i < n - 1; i++) {
            int start = points[i];
            int end = points[i + 1];
            int segment_count = i + 1; 
            int count = end - start; 
            
            frequency[segment_count] += count; 
        }

        
        for (int i = 0; i < q; i++) {
            int ki;
            cin >> ki; 
            cout << frequency[ki] << " "; 
        }
        cout << endl; 
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
