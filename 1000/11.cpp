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
    int n,d;
    cin>>n>>d;
    int count=0;
    vector<int>v(n);
    for(int i=0;i<n;i++){
         cin>>v[i];
         if(v[i]>d) count++;
    }
    sort(v.begin(),v.end(),greater<int>());
    int i=count;
    int j=n-1;
    while(i<j){
       j-=d/v[i];
       if(j>=i) i++;
       else break;
    }
    cout<<i<<endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    tc=1;
    while (tc--) {
        solve();
    }
    return 0;
}