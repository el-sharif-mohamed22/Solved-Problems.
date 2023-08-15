// Problem: A. Dice Tower
// Contest: Codeforces - Codeforces Round 139 (Div. 2)
// URL: https://codeforces.com/contest/225/problem/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

inline void sol() {
    int n, x; cin >> n >> x;
    for (int i = 0; i < n; ++i) {
        int u, v; cin >> u >> v;
        if (u == x || (7 - u) == x || v == x || (7 - v) == x) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    // int tc; cin >> tc; while (tc--) sol();
   sol();
    return 0;
}