/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221 (CSE)
*/
#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
void solve() {
    int n, t;
    cin >> n >> t;
    int v[n];
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    ll lb = 1, rb = 1e18;
    while (lb < rb) {
        ll mid = lb + (rb - lb) / 2, sum = 0;
        for (int i = 0; i < n; ++i) {
            sum += min(mid / v[i], (ll) 1e9);
        }
        if (t <= sum) rb = mid;
        else lb = mid + 1;
    }
    cout << lb;
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