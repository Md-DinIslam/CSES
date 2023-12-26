/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221
*/
#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int mxN = 1e3 + 12;
ll x, v[mxN];
void solve() {
    int n;
    cin >> n >> x;
    for (int i = 1; i <= n; ++i) {
        cin >> v[i];
    }
    unordered_map<int, ar<int, 2>> pr;
    // pr.reserve(1 << 20);
    for (int i = 1; i <= n; ++i) {
        for (int j = i + 1; j <= n; ++j) {
            if (pr.find(x - v[i] - v[j]) != pr.end()) {
                ar<int, 2> jk = pr[x - v[i] - v[j]];
                cout << i << ' ' << j << ' ' << jk[0] << ' ' << jk[1];
                return;
            }
        }
        for (int j = 1; j < i; ++j) {
            pr[v[i] + v[j]] = {i, j};
        }
    }
    cout << "IMPOSSIBLE";
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
