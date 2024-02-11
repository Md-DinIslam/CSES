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
    ll n;
    cin >> n;
    ll sum = 0;
    for (int i = 0, x; i < n - 1; ++i) {
        cin >> x;
        sum += x;
    }
    cout << (n * (n + 1) / 2) - sum;
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
