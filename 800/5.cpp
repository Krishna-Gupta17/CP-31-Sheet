#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// void solve() {
//     // write your solution here
//     int n;
//     cin>>n;
//     vector<int>v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     bool flag=true;
//     while(flag){
//         flag=false;
//     for(int i=1;i<n-1;i++){
//         if(v[i]>v[i+1]){
//             if(v[i]>v[i-1]){
//                 flag=true;
//                 swap(v[i],v[i+1]);
//             }
//         }
//     }
// }
//     if(is_sorted(v.begin(),v.end())) cout<<"YES"<<endl;
//     else cout<<"NO"<<endl;
// }

void solve() {
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    if(v[0]==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}