// Problem: A. Alyona and Numbers
// Contest: Codeforces - Codeforces Round 358 (Div. 2)
// URL: https://codeforces.com/contest/682/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

inline void sol() {
    int x, y; cin >> x >> y;
    vector<long long> colX(5, x / 5), colY(5, y / 5);
    for (int i = 1; i <= x % 5; ++i) {
        ++colX[i];
    }
    for (int i = 1; i <= y % 5; ++i) {
        ++colY[i];
    }
    long long ans{};
    for (int i = 0; i <= 4; ++i) {
        ans += colX[i] * colY[(5 - i) % 5];
    }
    cout << ans;
    
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    // int tc; cin >> tc; while (tc--) sol();
    sol();
    return 0;
}