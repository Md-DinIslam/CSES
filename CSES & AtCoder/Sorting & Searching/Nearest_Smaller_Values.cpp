/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221
*/
#include <bits/stdc++.h>
using namespace std;
#define ar array
void solve() {
    int n;
    cin >> n;
    stack<ar<int, 2>> v; // pair of stack...
    v.push({0, 0});
    for (int i = 1; i <= n; ++i) {
        int x;
        cin >> x;
        while (!v.empty() && v.top()[0] >= x)
            v.pop();
        cout << v.top()[1] << " ";
        v.push({x, i});
    }
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