#include <bits/stdc++.h>
using namespace std;
int main()
{
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    long long n;
    cin>>n;
    // vector<int> ans;
    while(true){
        // ans.push_back(n);
        cout<<n<<" ";
        if(n == 1) break;
        if(n % 2 == 0){
            n = n/2;
        }
        else{
            n = n * 3 + 1;
        }
    }
    // for(auto &i: ans){
    //     cout<<i<<" ";
    // }
    return 0;
}