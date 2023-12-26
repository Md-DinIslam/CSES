/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array
const int mxN = 2e5 + 10;
ll pref[mxN];
void solve() {
    int n, a, b;
    cin >> n >> a >> b;
    for (int i = 1; i <= n; ++i) {
        int x;
        cin >> x;
        pref[i] = x + pref[i - 1];
    }
    ll ans = -1e18;
    multiset<ll> st;
    for (int i = a; i <= n; ++i) {
        if (i > b) {
            st.erase(st.find(pref[i - b - 1]));
        }
        st.insert(pref[i - a]);
        ans = max(ans, pref[i] - *st.begin());
    }
    cout << ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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