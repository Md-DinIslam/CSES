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
#define pb push_back
void solve() {
    int n;
    cin >> n;
    ll sum = (n * (n + 1ll) / 2);
    if (sum & 1) cout << "NO";
    else {
        vector<int> v, v2;
        if (n & 1)
            v2.pb(n), --n;
        for (int i = 1; i <= n / 2; ++i) {
            if (i & 1) {
                v.pb(i);
                v.pb(n - i + 1);
            }
            else {
                v2.pb(i);
                v2.pb(n - i + 1);
            }
        }
        // debug(v);
        // debug(v2);
        n = v.size();
        cout << "YES\n" << n << '\n';
        for (int i = 0; i < n; ++i)
            cout << v[i] << " \n"[i == n - 1];
        cout << v2.size() << '\n';
        for (int i = 0; i < v2.size(); ++i)
            cout << v2[i] << " ";
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
