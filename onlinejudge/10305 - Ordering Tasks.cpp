// Problem: 10305 - Ordering Tasks
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1246
// Memory Limit: 32 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
vector<int> ans;

void dfs(vector<set<int>>& adj, vector<bool>& vis, int node) {
    
    vis[node] = true;
    
    for (int child : adj[node]) {
        if (!vis[child]) {
            dfs(adj, vis, child);
        }
    }
    
    ans.push_back(node + 1);
}



inline void sol(int n, int m) {
    ans.clear();
    
    vector<bool> vis(n, false);
    vector<set<int>> adj(n);
    for (int i = 0; i < m; ++i) {
        int u, v; cin >> u >> v; --u; --v;
        adj[v].insert(u);
    }
    for (int i = 0; i < n; ++i) {
        if (!vis[i]) {
            dfs(adj, vis, i);
        }
    }
    
    cout << ans.front();
    for (int i = 1; i < ans.size(); ++i) {
        cout << ' ' << ans[i];
    }
    cout << '\n';
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    // int tc; cin >> tc; while (tc--) sol();
//    sol();
    int n, m;
    while ((cin >> n >> m) && (n || m)) {
        sol(n, m);
    }
    return 0;
}