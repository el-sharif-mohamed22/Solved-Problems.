// Problem: 10611 - The Playboy Cendmp
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1552
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;



int main() {
    // ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int q, n, h; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) cin >> arr[i];
    cin >> q;
    for (int qq = 0; qq < q; ++qq) {
        cin >> h;
        int start = 0, end = n - 1;
        while (start < end) {
            int mid = start + (end - start + 1) / 2;
            if (arr[mid] >= h) {
                end = mid - 1;
            } else if (arr[mid] < h){
                start = mid;
            }
        }
        (arr[start] < h ? (cout << arr[start]) : (cout << 'X'));
        cout << ' ';
        
        auto taller = upper_bound(arr.begin(), arr.end(), h);
        (taller == arr.end()) ? (cout << 'X') : (cout << (*taller));
        cout << '\n';
        
    }
    return 0;
}