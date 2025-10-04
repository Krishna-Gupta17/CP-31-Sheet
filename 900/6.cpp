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
    if(n==1){
        cout<<1<<endl;
        return;
    }
    if(n==2){
        cout<<2<<endl;
        return;
    }
    for(int i=2;i<=n;i++){
        if(n%i!=0){
            cout<<i-1<<endl;
            return;
        }
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