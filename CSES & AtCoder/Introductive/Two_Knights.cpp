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
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        ll a = i * i;
        ll b = a * (a - 1) / 2;
        if (i > 2)
            b = b - (4 * (i - 1) * (i - 2));
        cout << b << '\n';
    }
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
