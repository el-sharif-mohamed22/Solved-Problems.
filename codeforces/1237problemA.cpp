// Problem: A. Balanced Rating Changes
// Contest: Codeforces - Codeforces Global Round 5
// URL: https://codeforces.com/contest/1237/problem/A
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

inline void sol() {
    int x, n; cin >> n; bool up{true};
    for (int i = 0; i < n; ++i) {
        cin >> x;
        if (x % 2 == 0) {
            cout << x / 2 << '\n';
        } else {
            cout << (up ? (x + 1) / 2 : (x - 1) / 2) << '\n';
            up = !up;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    // int tc; cin >> tc; while (tc--) sol();
    sol();
    return 0;
}