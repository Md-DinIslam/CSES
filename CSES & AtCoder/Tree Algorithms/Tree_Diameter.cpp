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
const int mxN = 2e5 + 10;
vector<int> g[mxN], depth(mxN);
void dfs(int curr, int par) {
    // cout << curr << " ";
    // depth[curr] = depth[par] + 1; // ans should be (ans - 1)....
    for (auto &child : g[curr]) {
        if (child != par) {
            depth[child] = depth[curr] + 1;
            dfs(child, curr);
        }
    }
}
void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < n - 1; ++i) {
        int x, y;
        cin >> x >> y;
        g[x].pb(y);
        g[y].pb(x);
    }
    dfs(1, 0);
    int mxDis = -1, mxNode;
    for (int i = 1; i <= n; ++i) {
        // cout << depth[i] << " ";
        if (mxDis < depth[i]) {
            mxDis = depth[i];
            mxNode = i;
        }
        depth[i] = 0;
    }
    dfs(mxNode, 0);
    for (int i = 1; i <= n; ++i) {
        mxDis = max(mxDis, depth[i]);
    }
    cout << mxDis << "\n";
}
int main() {
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}