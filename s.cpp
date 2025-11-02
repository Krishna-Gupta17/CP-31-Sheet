// #include <bits/stdc++.h>
// using namespace std;

// #define Yes cout<<'YES'<<endl
// #define No cout<<'NO'<<endl
// #define endl '\n'
// #define int long long

// const int MOD = 1e9 + 7;
// const int INF = LLONG_MAX >> 1;

// void solve() {
//     // write your solution here
//     int n,k;
//     cin>>n>>k;
//     if(n==1) {
//         cout<<"NO"<<endl;
//         return;
//     }
//     int current,minus;
//     if((n%4==1)||(n%4==2)) current=1;
//     else current=0;
//     if(((n-k)%4==1)||((n-k)%4==2)) minus=1;
//     else minus=0;
//         if(current==1){
//         if(minus==0){
//             cout<<"NO"<<endl;
//         }
//         else{
//             cout<<"YES"<<endl;
//         }
//     }
//     else {
//         if(minus==1){
//             cout<<"NO"<<endl;
//         }
//         else{
//             cout<<"YES"<<endl;
//         }
//     }
    
// }

// signed main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int tc;
//     cin >> tc;
//     while (tc--) {
//         solve();
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

#define Yes cout<<'YES'<<endl
#define No cout<<'NO'<<endl
#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    // write your solution here
    int n;
    cin>>n;
    int prev=0;
    vector<int>v(n);
    for(int i=1;i<=n;i++){
        v[i-1]=(prev+(i%2))%2;
        prev=v[i-1];
        cout<<v[i-1]<<" ";
    }
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