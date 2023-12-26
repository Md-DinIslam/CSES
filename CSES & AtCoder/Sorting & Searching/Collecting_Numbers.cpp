/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mxN = 2e5 + 10;
ll pref[mxN];
void solve() {
    int n;
    cin >> n;
    int v[n + 1] = {0};
    for (int i = 1; i <= n; ++i) {
        int x; cin >> x, v[x] = i;
        // cin >> v[i];
    }
    int ans = 1, curr = 1;
    for (int i = 1; i <= n; ++i) {
        if (v[i] < curr)
            ++ans;
        curr = v[i];
    }
    cout << ans;
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