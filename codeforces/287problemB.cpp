// Problem: B. Pipeline
// Contest: Codeforces - Codeforces Round 176 (Div. 2)
// URL: https://codeforces.com/contest/287/problem/B
// Memory Limit: 256 MB
// Time Limit: 400 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

inline void sol() {
    
    long long n, k; cin >> n >> k;
    if (n == 1) {cout << 0; return;}
    long long st{0}, en{k - 2};
    while (st < en) {
        long long mid = st + (en - st) / 2;
        long long low{2 + mid + mid * (mid + 1) / 2};
        long long high{k - mid + (k - 1) * k / 2 - (k - mid - 1) * (k - mid) / 2};
        
        
        if (n >= low && n <= high) {
            en = mid;
        } else if (n < low) {
            en = mid - 1;
        } else if (n > high) {
            st = mid + 1;
        }
    }

    long long mid = en;
    long long low{2 + mid + mid * (mid + 1) / 2};
    long long high{k - mid + (k - 1) * k / 2 - (k - mid - 1) * (k - mid) / 2};
        
    cout << (n >= low && n <= high ? en + 1 : -1);
    
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    // int tc; cin >> tc; while (tc--) sol();
    sol();
    return 0;
}