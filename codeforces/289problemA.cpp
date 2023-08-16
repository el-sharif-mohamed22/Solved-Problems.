// Problem: A. Polo the Penguin and Segments
// Contest: Codeforces - Codeforces Round 177 (Div. 2)
// URL: https://codeforces.com/contest/289/problem/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

inline void sol() {
    int n, k; cin >> n >> k;
    long long sum{};
    for (int i = 0; i < n; ++i) {
        int l, r; cin >> l >> r;
        sum += (r - l + 1);
    }
    cout << (k - (sum % k)) % k;
}    
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    // int tc; cin >> tc; while (tc--) sol();
    sol();
    return 0;
}