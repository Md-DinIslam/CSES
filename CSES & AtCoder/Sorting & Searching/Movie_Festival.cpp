/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221 (CSE)
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define arr array
void solve() {
    int n;
    cin >> n;
    arr<int, 2> v[n];
    for (int i = 0; i < n; ++i) {
        cin >> v[i][1] >> v[i][0];
    }
    sort(v, v + n);
    int ans = 0;
    for (int i = 0, j = 0; i < n; ++i) {
        if (v[i][1] >= j)
            ++ans, j = v[i][0];
    }
    cout << ans;
}
int main() {
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
    // for (int i = 1; i <= t; ++i) { //Kickstart
    //     cout << "Case #" << i << ": "; solve();
    // }
    return 0;
}