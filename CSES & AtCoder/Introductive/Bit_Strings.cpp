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
const int mod = 1e9 + 7;
 
ll binEx(ll a, ll b) {
    ll ans = 1;
    while (b) {
        if (b & 1)
            ans *= a, ans %= mod;
        a *= a;
        a %= mod;
        b >>= 1;
    }
    return ans;
}
void solve() {
    int  n;
    cin >> n;
    cout << binEx(2, n);
    
    // ll ans = 0;
    // for (int i = 1; i <= n; ++i) {
    //     ans *= 2;
    //     ans %= mod;
    // }
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
