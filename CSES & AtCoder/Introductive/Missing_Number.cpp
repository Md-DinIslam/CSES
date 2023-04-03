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
    int n;
    cin>>n;
    vector<int> ans(n-1);
    for(int i = 0;i<n-1; i++){
        cin>>ans[i];
    }
    sort(ans.begin(),ans.end());
    // PrintVec(ans);
    for(int i = 0;i<n;i++){
        if(ans[i] != i+1){
            cout<<i+1<<endl;
            break;
        }
    }
    // PrintVec(ans);
    return 0;
}