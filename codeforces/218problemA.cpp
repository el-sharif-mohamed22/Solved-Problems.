// Problem: A. Mountain Scenery
// Contest: Codeforces - Codeforces Round 134 (Div. 2)
// URL: https://codeforces.com/contest/218/problem/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

inline void sol() {
    int n, k; cin >> n >> k;
    vector<int> arr(2 * n + 1 + 1);
    for (int i = 1; i <= 2 * n + 1; ++i) {
        cin >> arr[i];
    }
    for (int i = 2; (i <= 2 * n + 1) && k; i += 2) {
        --arr[i]; --k;
        if (!(arr[i] > arr[i - 1] && arr[i] > arr[i + 1])) {
            ++arr[i]; ++k;
        }
    }
    for (int i = 1; i <= 2 * n + 1; ++i) {
        cout << arr[i] << ' ';
    }
    cout << '\n';
    
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    // int tc; cin >> tc; while (tc--) sol();
    sol();
    return 0;
}