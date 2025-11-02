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
    map<int,int>mp;
    int x;
    int prev=-1;
    bool flag=false;
    for(int i=0;i<n;i++){
        cin>>x;
        mp[x]++;
        if(prev>=mp[x]){
            if(prev==1) flag=true;
        }
        prev=mp[x];
    }
    if(n==1){
        cout<<-1<<endl;
        return;
    }
    if(flag){
        cout<<-1<<endl;
        return;
    }
    if(mp.rbegin()->second==1){
        cout<<-1<<endl;
        return;
    }
    vector<int>s(n);
    for(int i=0;i<n;i++) s[i]=i+1;
    int l=0;
    int r=0;
    for(auto val:mp){
            r+=val.second; 
            rotate(s.begin()+l,s.begin()+r-1,s.begin()+r);
            l=r;
        }
        for(auto it:s) cout<<it<<" ";
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