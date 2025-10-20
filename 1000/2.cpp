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
    set<int>s;
    int x;
    int maxi=-1;
    int e=0;
    bool flag=false;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x%2==0) e++;
        if(x%k==0) {
            flag=true;
        }
        if(maxi<x%k) {
            maxi=x%k;
        }
    }
    if(flag) {
        cout<<0<<endl;
        return;
    }
    if(k%4==0){
    if(e>=2+k/4-1) cout<<0<<endl;
    else if(e==1+) cout<<1<<endl;
    else{
        int ans=2;
        cout<<min(ans,(k-maxi))<<endl;
    }
}
else{
    cout<<(k-maxi)<<endl;
}
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}