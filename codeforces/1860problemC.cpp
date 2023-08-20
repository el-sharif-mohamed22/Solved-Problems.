// Problem: C. Game on Permutation
// Contest: Codeforces - Educational Codeforces Round 153 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1860/problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

inline void sol() {
    int n; cin >> n;
    
    vector<int> arr(n); for (int& i : arr) cin >> i;

    int mnWin{INT_MAX}, mnLose{arr[0]};
    int lucky{};
    for (int i = 1; i < n; ++i) {
        if (mnWin > arr[i]) {
            
        }
        bool validWin{mnWin < arr[i]}, validLose{mnLose < arr[i]};
        if (validWin) {
            // this means I am lose
            mnLose = min(mnLose, arr[i]);
        } else if (validLose) {
            // this means I am win
            mnWin = min(mnWin, arr[i]);
            ++lucky;
        } else {
            // this means I am lose
            mnLose = min(mnLose, arr[i]);
        }
        
    }
    cout << lucky << '\n';
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int tc; cin >> tc; while (tc--) sol();
    //sol();
    return 0;
}