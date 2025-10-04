#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    // write your solution here
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    map<char,int>m;
    for(int i=0;i<n;i++){
        m[s[i]]++;
    }
    int r=0;
    for(auto z:m){
        if((z.second)%2!=0) r++;
    }
    if((r-1)>k){
        cout<<"NO"<<endl;
        return;
    }
        cout<<"YES"<<endl;

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