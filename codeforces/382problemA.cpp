// Problem: A. Ksenia and Pan Scales
// Contest: Codeforces - Codeforces Round 224 (Div. 2)
// URL: https://codeforces.com/contest/382/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

inline void sol() {
    string s, t, p[2]; cin >> s >> t;
    int sep = s.find('|');
    p[0] = s.substr(0, sep); p[1] = s.substr(sep + 1, s.size());
    
    
    for (size_t i = 0; i < t.size(); ++i) {
        p[p[0].size() > p[1].size()].push_back(t[i]);
    }
    if (p[0].size() == p[1].size()) {
        cout << p[0] << '|' << p[1];
    } else {
        cout << "Impossible";
    }
}
int main() {
    // ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    // int tc; cin >> tc; while (tc--) sol();
    sol();
    return 0;
}