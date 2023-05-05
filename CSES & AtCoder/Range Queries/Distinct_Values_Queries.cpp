#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
int a[N], cnt[N], distinct;
struct query {
    int l, r, id, block, ans;
    bool operator<(query P) const {
        return make_pair(this->block, r) < make_pair(P.block, P.r);
    }
} q[N];
bool comp(query a, query b) {
    return a.id < b.id;
}
void add(int &val) {
    cnt[val]++;
    if (cnt[val] == 1) distinct++;
}
void remove(int &val) {
    cnt[val]--;
    if (cnt[val] == 0) distinct--;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("Error.txt", "w", stderr);
#endif
    int n, m, queries;
    cin >> n >> queries;
    m = sqrt(n) + 1;
    map<int, int> compres;
    int ptr = 1;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        // compres[a[i]];
        if (compres.find(a[i]) != compres.end()) {
            a[i] = compres[a[i]];
        }
        else {
            compres[a[i]] = ptr;
            a[i] = ptr++;
        }
    }
    // for (int i = 0; i < n; ++i) {
    //     compres[a[i]] = ptr++;
    // }
    // for (auto &pr : compres) {
    //     pr.second = ptr++;
    // }
    // for (int i = 0; i < n; ++i) {
    //     a[i] = compres[a[i]];
    // }
    for (int i = 0; i < queries; i++) {
        cin >> q[i].l >> q[i].r;
        q[i].l--; q[i].r--;
        q[i].id = i, q[i].block = q[i].l / m;
    }
    sort(q, q + queries);
    // for (int i = 0; i < queries; i++) {
    //  cout << q[i].id << " " << q[i].block << " " << q[i].l << " " << q[i].r << '\n';
    // }
    int x = 0, y = 0;
    for (int i = 0; i < queries; i++) {
        // adding y
        while (y <= q[i].r) {
            add(a[y]);
            y++;
        }
        // removing y
        while (y > q[i].r + 1) {
            y--;
            remove(a[y]);
        }
        // removing x
        while (x < q[i].l) {
            remove(a[x]);
            x++;
        }
        // adding x
        while (x > q[i].l) {
            x--;
            add(a[x]);
        }
        // distinct indicated the answer
        q[i].ans = distinct;
    }
    sort(q, q + queries, comp);
    for (int i = 0; i < queries; i++) {
        cout << q[i].ans << '\n';
    }
    return 0;
}