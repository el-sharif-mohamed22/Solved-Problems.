// Problem: A. Launch of Collider
// Contest: Codeforces - Codeforces Round 363 (Div. 2)
// URL: https://codeforces.com/contest/699/problem/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

inline void sol() {
    int n, mn{INT_MAX}; cin >> n;
    vector<char> dir(n); for (char& c : dir) cin >> c;
    vector<int> arr(n); for (int& i : arr) cin >> i;
    
    for (int i = 1; i < n; ++i) {
        if (dir[i - 1] == 'R' && dir[i] == 'L') mn = min(mn, arr[i] - arr[i - 1]);
    }
    cout << (mn == INT_MAX ? -1 : mn / 2);
    
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    // int tc; cin >> tc; while (tc--) sol();
    sol();
    return 0;
}