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
    int bit;
    cin >> bit;
    vector<int> v(bit);
    ll sum = 0;
    for (int i = 0; i < bit; ++i) {
        cin >> v[i];
        sum += v[i];
    }
    ll ans = 0;
    for (int i = 0; i < (1 << bit); ++i) {
        ll subSum = 0;
        for (int j = 0; j < bit; ++j) {
            if ((i >> j) & 1)
                subSum += v[j];
        }
        if (subSum <= sum / 2)
            ans = max(ans, subSum);
    }
    cout << sum - (2 * ans);
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
