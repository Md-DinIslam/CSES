/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221
*/
#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int mxN = 2e5 + 12;
ll x, v[mxN];
void solve() {
    int n;
    cin >> n >> x;
    unordered_map<int, int> cnt;
    cnt.reserve(1 << 20);
    for (int i = 1; i <= n; ++i) {
        cin >> v[i];
        // cnt[v[i]] = i;
    }
    for (int i = 1; i <= n; ++i) {
        if (cnt.find(x - v[i]) != cnt.end()) {
            cout << i << " " << cnt[x - v[i]];
            return;
        }
        cnt[v[i]] = i;
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