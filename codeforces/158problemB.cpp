// Problem: B. Taxi
// Contest: Codeforces - VK Cup 2012 Qualification Round 1
// URL: https://codeforces.com/contest/158/problem/B
// Memory Limit: 256 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int ans{}, n, arr[5]{}, x; cin >> n;
    
    for (int i = 0; i < n; ++i) {
        cin >> x;
        ++arr[x];
    }
    arr[1] -= min(arr[1], arr[3]); // fill ones with threes
    arr[1] -= min(arr[1], 2 * (arr[2] % 2)); // fill ones with taxi of 2
    // ans is taxies of arr[4] + arr[3] + ceil(arr[2] / 2) + ceil(arr[1] / 4)
    cout << arr[4] + arr[3] + (arr[2] + 2 - 1) / 2 + (arr[1] + 4 - 1) / 4;
    return 0;
}