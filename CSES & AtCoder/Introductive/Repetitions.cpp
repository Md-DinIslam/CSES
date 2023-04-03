#include <bits/stdc++.h>
using namespace std;
void PrintVec(vector<int> &v){
    for(auto &x:v){
        cout<<x<<" ";
    }
    cout<<endl;
}
int main()
{
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    string s;
    cin>>s;
    long long ans = 0, cnt = 1;
    for(int i = 0;i<s.size();i++){
        if(s[i] != s[i+1]){
            if(ans < cnt){
                ans = cnt;
            }
            cnt = 0;
        }
        cnt++;
    }
    cout<<ans<<endl;
    // PrintVec(ans);
    return 0;
}