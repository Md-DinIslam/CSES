#include <bits/stdc++.h>
using namespace std;

// Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Din cout.tie(NULL);

// Aliases
using ll = long long;
using lld = long double;
using ull = unsigned long long;

// TypeDEf
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<string> vs;
typedef vector<vll> mat;
typedef unordered_map<ll, ll> umpll;
typedef unordered_map<int, int> umpi;
typedef map<ll, ll> mpll;

// Macros
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define fl(i, n) for (int i = 0; i < n; i++)
#define rfl(i, m, n) for (int i = n; i >= m; i--)
#define py cout << "YES\n";
#define pm cout << "-1\n";
#define pn cout << "NO\n";
#define pf cout << "FIRST\n";
#define nn cout << "\n";
#define bitcount __builtin_popcountll
#define endl '\n'
#define all(v) v.begin(), v.end()
#define rall(v) v.end(), v.begin()

//DEBUG
void __print(int x) {cerr << x << " ";}
void __print(long x) {cerr << x << " ";}
void __print(long long x) {cerr << x << " ";}
void __print(unsigned x) {cerr << x << " ";}
void __print(unsigned long x) {cerr << x << " ";}
void __print(unsigned long long x) {cerr << x << " ";}
void __print(float x) {cerr << x << " ";}
void __print(double x) {cerr << x << " ";}
void __print(long double x) {cerr << x << " ";}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i : x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

// Constants
const lld PI = 3.141592653589793238;
const ll INF = 1e18 + 9;
const ll mod = 1e9 + 7;

ll binExp(ll a, ll b) {
    ll ans = 1;
    while (b) {
        if (b & 1) ans = (ans * a) % mod;
        a = (a * a) % mod, b >>= 1;
    }
    return ans;
}
void solve()
{
    int n;
    cin >> n;
    umpll pfs;
    fl(i, n) {
        ll x, y;
        cin >> x >> y, pfs[x] = y;
    }
    ll cnt = 1, sum = 1, prod = 1;
    for (auto &x : pfs) {
        cnt = (cnt * (x.ss + 1)) % mod;
        sum = (sum * (((binExp(x.ff, x.ss + 1) - 1)) * binExp(x.ff - 1, mod - 2) % mod) % mod) % mod;
    }
    ll ok = 0, pw = 1;
    for (auto &x : pfs) {
        if ((x.ss % 2) && !ok)
            pw = (pw * (x.ss + 1) / 2) % (mod - 1), ok = 1;
        else
            pw = (pw * (x.ss + 1)) % (mod - 1);
    }
    if (!ok)
        for (auto &x : pfs) pfs[x.ff] /= 2;
    for (auto &x : pfs)
        prod = (prod * binExp(x.ff, x.ss)) % mod;
    cout << cnt << " " << sum << " " << binExp(prod, pw);
}
// Main
int main()
{
    Code By Din
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("Error.txt", "w", stderr);
#endif
    clock_t z = clock();
    // ll t; cin >> t;
    // while(t--) solve();
    solve();
    // fl(i,t) //Kickstart
    // {
    //     cout<<"Case #"<<i+1<<": ";
    //     solve(); nn
    // }
    cerr << "\nRun Time : " << (((double)(clock() - z)) / CLOCKS_PER_SEC);
    return 0;
}