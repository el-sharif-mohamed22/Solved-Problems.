// Problem: B. Fancy Coins
// Contest: Codeforces - Educational Codeforces Round 153 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1860/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

int sol1(int m, int k, int a1, int ak) {
    
    int wantK{m / k};
    m -= min(wantK, ak) * k;
    m -= min(a1, m);
    
    return (m != 0 ? m / k + m % k : 0);
}
int sol2(int m, int k, int a1, int ak) {
    int ans{};
    int rem{m % k};
    int canRemove = min(a1, rem);
    
    ans += (rem - canRemove);
    m = (m / k) * k;
    
    if (a1 >= rem) a1 -= rem;
    else a1 = 0;

    ak += (a1 / k);
    
    int numK{m / k};
    
    ans += (numK - ak <= 0 ? 0 : numK - ak);

    return ans;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int tc; cin >> tc; while (tc--) {
        int m, k, a1, ak;
        cin >> m >> k >> a1 >> ak;
        cout << min(sol1(m, k, a1, ak), sol2(m, k, a1, ak)) << '\n';
    }
    //sol();
    return 0;
}