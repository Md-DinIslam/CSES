/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array
const int mxN = 5e5 + 123;
ar<int, 2> v[mxN]; // work like a pair<int, int>
void solve() {
    int n;
    ll x;
    cin >> n >> x;
    for (int i = 1; i <= n; ++i) {
        cin >> v[i][0], v[i][1] = i;
    }
    sort(v + 1, v + n + 1);
    for (int i = 1; i <= n; ++i) {
        ll need = x - v[i][0];
        for (int j = i + 1, k = n; j < k; ++j) {
            while (j < k && v[j][0] + v[k][0] > need)
                --k;
            if (j < k && v[j][0] + v[k][0] == need) {
                cout << v[i][1] << ' ' << v[j][1] << ' ' << v[k][1];
                return;
            }
        }
    }
    cout << "IMPOSSIBLE";
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

/*
    ll x, v[mxN];
    void solve() {
        int n;
        cin >> n >> x;
        unordered_map<int, int> cnt;
        cnt.reserve(1 << 20);
        for (int i = 1; i <= n; ++i) {
            cin >> v[i];
            cnt[v[i]] = i;
        }
        for (int i = 1; i <= n; ++i) {
            for (int j = i + 1; j <= n; ++j) {
                ll need = x - (v[i] + v[j]);
                if (cnt.find(need) != cnt.end() && cnt[need] > j) {
                    cout << i << ' ' << j << ' ' << cnt[need] << '\n';
                    return;
                }
            }
        }
        cout << "IMPOSSIBLE";
    }
*/