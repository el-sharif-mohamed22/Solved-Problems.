// Problem: A. Help Vasilisa the Wise 2
// Contest: Codeforces - Codeforces Round 102 (Div. 2)
// URL: https://codeforces.com/contest/143/problem/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

inline void sol() {
    vector<vector<int>> arr(3, vector<int> (2));
    for (auto& x : arr) {
        for (auto& y : x) {
            cin >> y;
        }
    }

    for (int i = 1; i <= 9; ++i) {
        for (int j = 1; j <= 9; ++j) {
            for (int k = 1; k <= 9; ++k) {
                for (int v = 1; v <= 9; ++v) {
                    set<int> st; 
                    st.insert(i); st.insert(j); st.insert(k); st.insert(v);
                    if (st.size() != 4) continue;

                    bool check = (i + j == arr[0][0]) && 
                                 (k + v == arr[0][1]) &&
                                 (i + k == arr[1][0]) &&
                                 (j + v == arr[1][1]) &&
                                 (i + v == arr[2][0]) &&
                                 (j + k == arr[2][1]);
                    if (check) {
                        cout << i << ' ' << j << '\n' 
                             << k << ' ' << v << '\n';
                        return;
                    }
                    
                }
            }
        }
    }
    cout << -1;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    // int tc; cin >> tc; while (tc--) sol();
    sol();
    return 0;
}