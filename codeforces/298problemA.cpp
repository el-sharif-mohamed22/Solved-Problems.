// Problem: A. Snow Footprints
// Contest: Codeforces - Codeforces Round 180 (Div. 2)
// URL: https://codeforces.com/contest/298/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

inline void sol() {
    int n; cin >> n;
    string s; cin >> s;
    std::string::size_type st = s.find('R'), en = s.rfind('R');
    if (st != string::npos) {
        cout << st + 1 << ' ' << en + 2;
    } else {
        en = s.find('L'); st = s.rfind('L');
        cout << st + 1 << ' ' << en;
    }
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    // int tc; cin >> tc; while (tc--) sol();
    sol();
    return 0;
}