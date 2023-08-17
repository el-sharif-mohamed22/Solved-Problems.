// Problem: Aggressive cows
// Contest: SPOJ - Classical
// URL: https://www.spoj.com/problems/AGGRCOW/
// Memory Limit: 1536 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
int arr[100000];


bool ok(int x, int n, int c) {
    int last = arr[0]; --c;
    for (int i = 1; c && i < n; ++i) {
        if (arr[i] - last >= x) {
            --c;
            last = arr[i];
        }
    }
    return !c;
}

inline void sol() {
    int n, c; cin >> n >> c;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int st{0}, en{1'000'000'000};
    while (st < en) {
        int mid = st + (en - st + 1) / 2;
        if (ok(mid, n, c)) {
            st = mid;
        } else {
            en = mid - 1;
        }
    }
    cout << st << '\n';
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int tc; cin >> tc; while (tc--) sol();
    //sol();
    return 0;
}