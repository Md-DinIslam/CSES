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
int ans;
void dfs(int curr, int par = -1) {
    for (auto &child : g[curr]) {
        if (child != par) {
            dfs(child, curr);
            ans = max(ans, depth[curr] + depth[child] + 1);
            depth[curr] = max(depth[curr], depth[child] + 1);
        }
    }
}
void solve() {
    int n;
    cin >> n;
    for (int i = 1; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        // --x, --y; // 0'based.....
        g[x].pb(y);
        g[y].pb(x);
    }
 
    dfs(1);
 
    cout << ans << '\n';
 
    // dfs(1, 0);
    // int mxDis = -1, mxNode;
    // for (int i = 1; i <= n; ++i) {
    //     if (mxDis < depth[i]) {
    //         mxDis = depth[i];
    //         mxNode = i;
    //     }
    // }
    // dfs(mxNode, 0);
    // for (int i = 1; i <= n; ++i) {
    //     mxDis = max(mxDis, depth[i]);
    // }
    // cout << mxDis - 1;
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
