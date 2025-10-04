#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define Yes cout<<"YES"<<endl
#define No cout<<"NO"<<endl
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    // write your solution here
    int n,k,x;
    cin>>n>>k>>x;
    int w=k;
    int minS=((k*(k+1))/2);
    int maxS=((k*(2*n-k+1))/2);
    if(minS>x) No;
    else if(maxS<x) No;
    else Yes;
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