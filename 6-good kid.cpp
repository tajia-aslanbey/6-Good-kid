#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int min_idx = 0;
        for (int i = 1; i < n; i++) {
            if (a[i] < a[min_idx]) min_idx = i;
        }
        a[min_idx]++;

        long long prod = 1;
        for (int x : a) prod *= x;
        cout << prod << '\n';
    }
    return 0;
}    
