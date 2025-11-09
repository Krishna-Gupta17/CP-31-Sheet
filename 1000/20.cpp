#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    // write your solution here
    int a,b;
    cin>>a>>b;
    int x;
    int ans=a;
    if((a-1)%4==0) x=a-1;
    else if((a-1)%4==1) x=1;
    else if((a-1)%4==2) x=a;
    else x=0;
    if(x==b) cout<<ans<<endl;
    else{
        if((x^b)==a) cout<<ans+2<<endl;
        else cout<<ans+1<<endl;
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