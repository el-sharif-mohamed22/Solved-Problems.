// Problem: A. Not a Substring
// Contest: Codeforces - Educational Codeforces Round 153 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1860/problem/0
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

inline void sol() {
    string s; cin >> s;
    if (s == "()") {
        cout << "NO\n";
        return;
    }
    
    string t1, t2;
    for (int i = 0; i < s.size(); ++i) {
        t1 += "()";
    } 
    t2 += string(s.size(), '(');
    t2 += string(s.size(), ')');
    
    if (t1.find(s) == string::npos) {
        cout << "YES" << '\n' << t1 << '\n';
        return;
    }
    if (t2.find(s) == string::npos) {
        cout << "YES" << '\n' << t2 << '\n';
        return;
    }
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int tc; cin >> tc; while (tc--) sol();
    //sol();
    return 0;
}