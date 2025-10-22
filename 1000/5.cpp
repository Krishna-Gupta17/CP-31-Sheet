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
//     vector<pair<int,int>>v;
//     int x;
//     for(int i=0;i<n;i++){
//         cin>>x;
//         v.push_back({x,i+1});
//     }
//     int i=0;
//     while(i<n){
//         sort(v.begin()+i,v.end()+i,[](auto &a, auto &b){
//             if(a.first==b.first) return a.second<b.second;
//             return a.first>b.first;
//         });
//         v[i].first-=k;
//         if((v[i].first)<=0){
//             cout<<v[i].second<<" ";
//             i++;
//         } 
//     }
//     cout<<endl;
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
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first;
        if(v[i].first>k){
            if((v[i].first)%k==0) v[i].first=k;
            else v[i].first=(v[i].first)%k;
        } 
        v[i].second=i+1;
    }
    sort(v.begin(),v.end(),[](auto &a,auto &b){
         if(a.first==b.first) return a.second<b.second;
          return a.first>b.first;
         });
    for(int i=0;i<n;i++){
        cout<<v[i].second<<" ";
    }
    cout<<endl;
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