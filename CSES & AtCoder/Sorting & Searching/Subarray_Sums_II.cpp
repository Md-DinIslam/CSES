/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int mxN = 2e5 + 10;
int n;
ll x, v[mxN];
void solve() {
    cin >> n >> x;
    ll ans = 0, sum = 0;
    unordered_map<ll, int> m;
    m[0]++;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        sum += v[i];
        ans += m[sum - x];
        m[sum]++;
    }
    cout << ans;
}
/*
const int mxN = 2e5 + 10;
int n;
ll x, v[mxN], sum[mxN];
void solve() {
    cin >> n >> x;
    map<ll, int> m;
    for (int i = 1; i <= n; ++i) {
        cin >> v[i];
        sum[i] = v[i] + sum[i - 1];
        m[sum[i]]++;
    }
    ll ans = 0;
    m[0]++;
    for (int i = n; i > 0; --i) {
        m[sum[i]]--;
        ans += m[sum[i] - x];
    }
    cout << ans;
} */
// Main
int main()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("Error.txt", "w", stderr);
#endif
    clock_t z = clock();
    ll t = 1;
    // cin >> t;
    while (t--) solve();
    // fl(i, t) { //Kickstart
    //     cout << "Case #" << i + 1 << ": ";
    //     solve();
    // }
    cerr << "\nRun Time : " << (((double)(clock() - z)) / CLOCKS_PER_SEC);
    return 0;
}