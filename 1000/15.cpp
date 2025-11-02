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
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int w=0,b=0;
    vector<int>v;
    for(int i=0;i<k;i++){
        if(s[i]=='W') w++;
    }
    v.push_back(w);
    int i=k;
    while(i<n){
        if(s[i]=='W') w++;
        if(s[i-k]=='W') w--;
        v.push_back(w);
        i++;
    }
    sort(v.begin(),v.end());
    cout<<v[0]<<endl;
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