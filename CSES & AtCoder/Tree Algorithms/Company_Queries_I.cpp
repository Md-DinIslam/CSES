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
        int x, k;
        cin >> x >> k;
        if (depth[x] < k) cout << "-1\n";
        else {
            for (int i = logN - 1; ~i; --i) {
                if ((k >> i) & 1)
                    x = par[x][i];
            }
            cout << x << '\n';
        }
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