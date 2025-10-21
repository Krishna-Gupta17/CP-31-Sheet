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
    int m;
    vector<pair<int,int>>minx;
    for(int i=0;i<n;i++){
        cin>>m;
        int mini1=INT_MAX;
        int mini2=INT_MAX;
        int x;
        for(int i=0;i<m;i++){
            cin>>x;
            if(x<mini1){
                mini2=mini1;
                mini1=x;
            }else if(x<mini2) {
                mini2=x;
            }
        }
        minx.push_back({mini2,mini1});
    }
    sort(minx.begin(),minx.end());
    int s=minx.size();
    int sum=0;
    int tr=minx[0].second;
    for(int i=1;i<s;i++){
        sum+=minx[i].first;
        if(tr>minx[i].second) tr=minx[i].second;
    }
    cout<<sum+tr<<endl;;
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