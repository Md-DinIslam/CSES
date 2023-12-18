/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221
*/
#include <bits/stdc++.h>
using namespace std;
const int mxN = 1e3 + 10;
int n, q, bit[mxN][mxN];
void build(int i2, int j2, int val) {
    for (int i = i2 + 1; i <= n; i += (i & -i)) {
        for (int j = j2 + 1; j <= n; j += (j & -j)) {
            bit[i][j] += val;
        }
    }
}
int qry(int i2, int j2) {
    int ans = 0;
    for (int i = i2; i; i -= (i & -i)) {
        for (int j = j2; j; j -= (j & -j))
            ans += bit[i][j];
    }
    return ans;
}
void solve() {
    cin >> n >> q;
    string s[n];
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
        for (int j = 0; j < n; ++j) {
            if (s[i][j] == '*') build(i, j, 1);
        }
    }
    while (q--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        cout << qry(x2, y2) - qry(x1 - 1, y2) - qry(x2, y1 - 1) + qry(x1 - 1, y1 - 1) << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("Error.txt", "w", stderr);
#endif
    int t = 1;
    // cin >> t;
    while (t--) solve();
    // fl(i, t) { //Kickstart
    //     cout << "Case #" << i + 1 << ": "; solve();
    // }
    return 0;
}