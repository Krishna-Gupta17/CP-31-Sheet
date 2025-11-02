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
    int avg=(n+1)>>1;
    if((n+1)%2!=0) avg++;
    vector<int>np;
    int i=0;
    while(((avg+(i+1))<=n+1)||(avg-(i+1))>=1){
       if((avg+(i+1))<=n+1) np.push_back(avg+(i+1));
       if((avg-(i+1))>=1) np.push_back(avg-(i+1));
        i++;
    }
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first;
        v[i].second=i;
    }
    sort(v.begin(),v.end(),greater<pair<int,int>>());
    vector<int>ans(n+1,0);
    int cal=0;
    for(int i=0;i<n;i++){
        ans[v[i].second]=np[i];
        cal+=((abs((np[i])-avg))*(v[i].first)*2);
    }
    cout<<cal<<endl;
    cout<<avg<<" ";
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
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