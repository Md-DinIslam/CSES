/* GREEN UNIVERSITY OF BANGLADESH
    Md DinIslam, Batch-221 (CSE)
*/
#include <bits/stdc++.h>
using namespace std;

// Debug..
#ifdef LOCAL
#include "debug.h"
#endif

#define ll long long
#define pb push_back
const int mxN = 2e5 + 10, logN = 19;
vector<int> g[mxN];
int par[mxN][logN], depth[mxN];

void dfs(int curr, int p) {
    par[curr][0] = p;
    for (int i = 1; i < logN; ++i) {
        par[curr][i] = par[par[curr][i - 1]][i - 1];
    }
    for (auto &x : g[curr]) {
        if (x != p) {
            depth[x] = depth[curr] + 1;
            dfs(x, curr);
        }
    }
}

int lca(int a, int b) {
    if (depth[a] < depth[b]) swap(a, b);
    int d = depth[a] - depth[b];
    for (int j = logN - 1; ~j; --j) {
        if ((d >> j) & 1)
            a = par[a][j];
    }
    if (a == b) return a;
    for (int j = logN - 1; ~j; --j) {
        if (par[a][j] ^ par[b][j]) {
            a = par[a][j];
            b = par[b][j];
        }
    }
    return par[a][0]; // same as par[b][0];
}
void solve() {
    int n, q;
    cin >> n >> q;
    for (int i = 1; i < n; ++i) {
        int x;
        cin >> x;
        g[x].pb(i + 1);
    }

    dfs(1, 0);

    while (q--) {
        int a, b;
        cin >> a >> b;
        cout << lca(a, b) << '\n';
    }
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) solve();
    // for (int i = 1; i <= t; ++i) { // Kickstart
    //     cout << "Case #" << i << ": "; solve();
    // }
    return 0;
}