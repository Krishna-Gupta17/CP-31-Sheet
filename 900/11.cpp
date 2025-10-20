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
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    bool flag=true;
    for(int i=0;i<n-1;i++){
        if(v[i]==1) {
            if(flag){
            v[i]++;
            flag=false;
            }
            else{
                v[i]+=2;
                flag=true;
            }
        }
        else{
            flag=true;
        }
    }
    for(int i=0;i<n-1;i++){
        if(v[i+1]%v[i]==0) v[i+1]++;
        cout<<v[i]<<" ";
    }
    cout<<v[n-1]<<" ";
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