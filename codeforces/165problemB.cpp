// Problem: B. Burning Midnight Oil
// Contest: Codeforces - Codeforces Round 112 (Div. 2)
// URL: https://codeforces.com/contest/165/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
bool ok(int n, int x, int k) {
    long long sum{}, div{1};
    while (x / div) {
        sum += (x / div);
        div *= k;
    }
    return sum >= n;
}
inline void sol() {
    
    int n, k; cin >> n >> k;
    int st{1}, en{n};
    while (st < en) {
        int mid = st + (en - st) / 2;
        if (ok(n, mid, k)) {
            en = mid;
        } else {
            st = mid + 1;
        }
    }
    cout << en;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    // int tc; cin >> tc; while (tc--) sol();
    sol();
    return 0;
}