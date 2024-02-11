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
void solve() {
    ll x, y;
    cin >> x >> y;
    ll mxV = max(x, y);
    ll ans = (mxV - 1) * (mxV - 1);
    if (mxV & 1 ^ 1) {
        if (y != mxV) ans += (2 * x) - y;
        else ans += x;
    }
    else {
        if (x != mxV) ans += (2 * y) - x;
        else ans += y;
    }
    cout << ans << '\n';
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
    // for (int i = 1; i <= t; ++i) { // Kickstart
    //     cout << "Case #" << i << ": "; solve();
    // }
    return 0;
}
