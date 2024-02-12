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
const int mxN = 1e3 + 10;
int n, m;
string s[mxN];

bool ok(int i, int j) {
    return (i >= 0 && j >= 0 && i < n && j < m && s[i][j] == '.');
}

void dfs(int i, int j) {
    s[i][j] = '#';
    if (ok(i + 1, j)) dfs(i + 1, j);
    if (ok(i - 1, j)) dfs(i - 1, j);
    if (ok(i, j + 1)) dfs(i, j + 1);
    if (ok(i, j - 1)) dfs(i, j - 1);
}
void solve() {
    // int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
        cin >> s[i];
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (ok(i, j)) {
                dfs(i, j);
                ans++;
            }
        }
    }
    cout << ans;
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