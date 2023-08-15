// Problem: Hierarchy
// Contest: SPOJ - Classical
// URL: https://www.spoj.com/problems/MAKETREE/
// Memory Limit: 1536 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
const int N{100000 + 1};

vector<vector<int>> adj(N);
vector<int> root(N);
vector<int> start(N, -1), finish(N, -1);

int timer{};
void dfs(int node) {
    start[node] = timer++;

    for (int& child : adj[node]) {
        
        if (start[child] == -1) { // unvisited before. tree edge
            root[child] = root[node];
            dfs(child);
        } else if (finish[child] == -1) { // back edge.
            root[node] = root[child];
        } else if (start[child] > start[node]) { // forward edge
            // delete edge
            child = -1;
        } else { // cross edge
            child = root[child];
            root[child] = node;
        }
    }
    finish[node] = timer++;
}
void dfs2(int node) {
    start[node] = timer++;

    for (int& child : adj[node]) {

        if (start[child] == -1) { // unvisited before. tree edge
            root[child] = root[node];
            dfs(child);
        } else if (finish[child] == -1) { // back edge.
            root[node] = root[child];
        } else if (start[child] > start[node]) { // forward edge
            root[child] = root[node];
            
        } else { // cross edge
            
        }
    }
    finish[node] = timer++;
}

inline void sol() {
    int to, w, n, k; cin >> n >> k;

    for (int i = 0; i < n; ++i) {
        root[i] = i;
    }

    for (int i = 0; i < k; ++i) {
        cin >> w;
        for (int j = 0; j < w; ++j) {
            cin >> to; --to;
            adj[i].push_back(to);
        }
    }
    
    for (int i = 0; i < n; ++i) {
        if (start[i] == -1) {
            dfs2(i);
        }
    }
    start = finish = vector<int> (n, -1);

    for (int i = 0; i < n; ++i) {
        if (start[i] == -1) {
            dfs(i);
        }
    }
    int boss{};

    for (int i = 0; i < n; ++i) {
        if (root[i] == i) {
            boss = i;
            break;
        }
    }
    root[boss] = -1;

    for (int i = 0; i < k; ++i) {
        for (int child : adj[i]) {
            if (child == -1) continue;
            root[child] = i;
        }
    }


    for (int i = 0; i < n; ++i) {
        if (root[i] == -1) {
            cout << 0 << '\n';
        } else if (root[i] == i) {
            cout << k << '\n';
        } else {
            cout << root[i] + 1 << '\n';
        }
    }

}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    // int tc; cin >> tc; while (tc--) sol();
    sol();
    return 0;
}