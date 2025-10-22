// #include <bits/stdc++.h>
// using namespace std;

// #define Yes cout<<'YES'<<endl
// #define No cout<<'NO'<<endl
// #define endl '\n'
// #define int long long

// const int MOD = 1e9 + 7;
// const int INF = LLONG_MAX >> 1;

// int ansi(int v,int k,int n){
//     int ans=0;
//     while(k<=n && k<=v){
//         if(v%k==0) ans+=v/k;
//         else ans+=(v/k+1);
//         k++;
//     }
//     return ans;
// }

// void solve() {
//     // write your solution here
//     int n,k,q;
//     cin>>n>>k>>q;
//     vector<int>v;
//     int p=0;
//     int x;
//     for(int i=0;i<n;i++){
//         cin>>x;
//         if(x<=q) p++;
//         else{
//             if(p<k){
//                 p=0;
//                 continue;
//             }
//             v.push_back(p);
//             p=0;
//         }
//     }
//     if(p>=k) v.push_back(p);
//     int ans=0;
//     for(int i=0;i<v.size();i++){
//         ans+=ansi(v[i],k,n);
//     }
//     cout<<ans<<endl;
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

int ansi(int v,int k,int n){
    int ans=0;
    while(k<=n && k<=v){
        if(v%k==0) ans+=v/k;
        else ans+=(v/k+1);
        k++;
    }
    return ans;
}

void solve() {
    // write your solution here
    int n,k,q;
    cin>>n>>k>>q;
    vector<int>v;
    int p=0;
    int x;
    int ans=0;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x<=q) p++;
        else{
            if(p<k){
                p=0;
                continue;
            }
            ans+=((p-k+1)*(p-k+2))/2;
            p=0;
        }
    }
    if(p>=k) ans+=((p-k+1)*(p-k+2))/2;
    cout<<ans<<endl;
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