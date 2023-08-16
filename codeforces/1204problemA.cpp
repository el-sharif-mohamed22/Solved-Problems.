// Problem: A. BowWow and the Timetable
// Contest: Codeforces - Codeforces Round 581 (Div. 2)
// URL: https://codeforces.com/contest/1204/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

inline void sol() {
    string s; cin >> s;
    int ans = (s.size() + 1) / 2;
    if ((s.find('1', 1) == string::npos) && (s.size() % 2 != 0)) {
        --ans;
    }
    cout << ans;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    // int tc; cin >> tc; while (tc--) sol();
    sol();
    return 0;
}