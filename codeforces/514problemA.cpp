// Problem: A. Chewbaсca and Number
// Contest: Codeforces - Codeforces Round 291 (Div. 2)
// URL: https://codeforces.com/contest/514/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
void k(long long t) {
    
}

inline void sol() {
    string s; cin >> s;
    int x = s[0] - '0';
        cout << (x >= 5 && x != 9 ? 9 - x : x);
    for (int i = 1; i < s.size(); ++i) {
        int x = s[i] - '0';
        cout << (x >= 5 ? 9 - x : x);
    }
    
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    // int tc; cin >> tc; while (tc--) sol();
    sol();
    return 0;
}