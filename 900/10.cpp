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
    int n,q;
    cin>>n>>q;
    vector<int>v;
    int x;
    int s=0;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(s);
        s+=x;
    }
    v.push_back(s);
    for(int i=0;i<q;i++){
        int l,r,k;
        cin>>l>>r>>k;
        int fsum=v[n]-(v[r]-v[l-1])+k*(r-l+1);
        if(fsum%2==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
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