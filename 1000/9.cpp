// Approaches in screenshot 23-oct


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
    int a=1;
    int b=n-1;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            a=n/i;
            b=n-a;
            break;
        }
    }
    cout<<a<<" "<<b<<endl;
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