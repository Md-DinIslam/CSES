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
    int v[n];
    for (int i = 1; i <= n; ++i)
        cin >> v[i];
    sort(v + 1, v + n + 1);
    ll ans = -1;
    pref[0] = 1;
    for (int i = 1; i <= n; ++i) {
        if (pref[i - 1] < v[i]) {
            ans = pref[i - 1];
            break;
        }
        pref[i] = pref[i - 1] + v[i];
    }
    cout << (ans != -1 ? ans : pref[n]);
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