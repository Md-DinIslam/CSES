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
 
int cnt[26];
void solve() {
    string s;
    cin >> s;
    for (auto &ch : s) {
        cnt[ch - 'A']++;
    }
    int odd_cnt = 0;
    for (auto &x : cnt) {
        if (x % 2) odd_cnt++;
    }
    if (odd_cnt > 1) {
        cout << "NO SOLUTION"; return;
    }
    string ans = "";
    for (int i = 0; i < 26; ++i) {
        if (cnt[i] & 1 ^ 1) {
            for (int j = 0; j < cnt[i] / 2; ++j) {
                ans += (char) ('A' + i);
            }
        }
    }
    cout << ans;
    for (int i = 0; i < 26; ++i) {
        if (cnt[i] & 1) {
            for (int j = 0; j < cnt[i]; ++j) {
                // cout<<s[i];
                cout << (char) ('A' + i);
            }
        }
    }
    reverse(begin(ans), end(ans));
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
