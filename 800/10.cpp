#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    // write your solution here
    string s;
        int ans=0;
    for(int j=0;j<10;j++){
        cin>>s;
        for(int i=0;i<10;i++){
            if(s[i]=='X'){
                if((i==5)||(i==4)){
                    ans+=5;
                }
                else if(i>5) {
                    ans+=(10-i);
                }
                else{
                    ans+=(i+1);
                }
            } 
        }
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