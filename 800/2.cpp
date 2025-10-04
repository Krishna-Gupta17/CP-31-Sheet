#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    // write your solution here
    int n,x;
    cin>>n>>x;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int diff=v[0];
    for(int i=0;i<n-1;i++){
        int c=v[i+1]-v[i];
        if(c>diff) diff=c;
    }
    if(diff<2*(x-v[n-1])) diff=2*(x-v[n-1]);
    cout<<diff<<endl;
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