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
    string s;
    cin >> s;
    int n = s.size();
    int ans = 1, cnt = 1;
    for (int i = 1; i < n; ++i) {
        if (s[i] == s[i - 1]) cnt++;
        else cnt = 1;
        ans = max(ans, cnt);
    }
    cout << ans;
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
