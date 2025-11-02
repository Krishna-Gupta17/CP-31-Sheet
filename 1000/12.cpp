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
    vector<int>v(n);
    for(auto i:v) cin>>i;
    sort(v.begin(),v.end());
    if(n%2==0){
        int ans=0;
    for(int i=0;i<n-1;i+=2){
        ans+=(v[i+1]-v[i]);
    } 
    cout<<ans<<endl;
    }
    else{
        
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