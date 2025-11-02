// Y is max set bit position, then
// 2^Y  > 2^(Y-1)+2^(Y-2)+......+2^0
// => max cost >= 2^Y
// there is only way to maintain lower bound 2^Y of min cost is => if max set positon in number is less than Y then 0 will appear left to 2^Y and remaning all less set positioned in any manner left of 0 and all set poition equal to Y will be placed in right of 2^Y in any manner.

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
    n--;
     int max2P = 1LL << (63 - __builtin_clzll(n));
    for(int i=max2P-1;i>=0;i--){
        cout<<i<<" ";
    }
    for(int i=max2P;i<=n;i++) cout<<i<<" ";
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