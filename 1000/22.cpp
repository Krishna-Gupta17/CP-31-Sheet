// if b==1 and a==10^9 => 32 operation to make it zero if b++.
//if b+=31 then devide => 32 operation means => we don't need to check after b=32.

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
    int ans=INT_MAX;
    for(int i=0;i<32;i++){
        int c=a;
        int d=b+i;
        if(d==1) continue;
        int op=i;
        while(c>0){
            op++;
            c/=d;
        }
        if(op<ans) ans=op;
    }
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