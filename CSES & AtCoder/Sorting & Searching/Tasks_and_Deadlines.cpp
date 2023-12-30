/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221 (CSE)
*/
#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
void solve() {
    int n;
    cin >> n;
    ar<int, 2> v[n];
    for (int i = 0; i < n; ++i) {
        cin >> v[i][0] >> v[i][1];
    }
    sort(v, v + n);
    ll sum = 0, ans = 0;
    for (int i = 0; i < n; ++i) {
        sum += v[i][0];
        ans += (v[i][1] - sum);
        // cout << v[i][0] << " " << v[i][1] << '\n';
    }
    cout << ans << '\n';
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
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