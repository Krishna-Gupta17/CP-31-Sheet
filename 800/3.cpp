#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    // write your solution here
    int n;
    cin>>n;

    string s;
    cin>>s;
    int count=0;
    int ans=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='.') count++;
    }

    size_t i=s.find("...");

    if(i==string::npos){
        cout<<count<<endl;
        return;
    }
    cout<<2<<endl;
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