// A.P.
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    // write your solution here
    int x,y,k;
    cin>>x>>y>>k;
    int ts=k+k*y;
    int d=x-1;
    if((ts-1)%d==0) ts=(ts-1)/d+1;
    else ts=(ts-1)/d+2;
    cout<<ts-1+k<<endl;
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