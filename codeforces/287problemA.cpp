// Problem: A. IQ Test
// Contest: Codeforces - Codeforces Round 176 (Div. 2)
// URL: https://codeforces.com/contest/287/problem/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

inline void sol() {
    char arr[4][4];
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cin >> arr[i][j];
        }
    }
    
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            int freq[2]{};
            for (int v = 0; v < 2; ++v) {
                for (int y = 0; y < 2; ++y) {
                    ++freq[arr[i + v][j + y] == '.'];
                }
            }
            if (freq[0] >= 3 || freq[1] >= 3) {
                cout << "YES\n"; return;
            }

        }
    }
    cout << "NO\n";
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    // int tc; cin >> tc; while (tc--) sol();
    sol();
    return 0;
}