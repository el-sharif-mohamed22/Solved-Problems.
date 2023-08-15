// Problem: A. Good Number
// Contest: Codeforces - Codeforces Round 213 (Div. 2)
// URL: https://codeforces.com/contest/365/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

inline void sol() {
    int n, ans{}; char k; cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        string s; cin >> s;
        set<char> st;
        for (char& c : s) {
            if (c <= k) {
                st.insert(c);
            } else {
                continue;
            }
        }
        ans += (st.size() == (k - '0') + 1);
    }
    cout << ans << '\n';
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    // int tc; cin >> tc; while (tc--) sol();
    sol();
    return 0;
}