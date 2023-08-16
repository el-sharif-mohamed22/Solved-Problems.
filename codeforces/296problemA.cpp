// Problem: A. Yaroslav and Permutations
// Contest: Codeforces - Codeforces Round 179 (Div. 2)
// URL: https://codeforces.com/contest/296/problem/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

inline void sol() {
    int n, x, mx{INT_MIN}; cin >> n;
    vector<int> freq(1000 + 1, 0);
    for (int i = 0; i < n; ++i) {
        cin >> x; ++freq[x];
        mx = max(mx, freq[x]);
    }
    cout << (mx <= (n + 1) / 2 ? "YES\n" : "NO\n");
    
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    // int tc; cin >> tc; while (tc--) sol();
    sol();
    return 0;
}