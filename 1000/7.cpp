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
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    vector<int>va(2*n+1,0), vb(2*n+1,0);
    int c=1;
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]) c++;
        else{
            if(c>va[a[i]]) va[a[i]]=c;
            c=1;
        }
    }
    if(c>va[a[n-1]]) va[a[n-1]]=c;
    c=1;
    for(int i=0;i<n-1;i++){
        if(b[i]==b[i+1]) c++;
        else{
            if(c>vb[b[i]]) vb[b[i]]=c;
            c=1;
        }
    }
    if(c>vb[b[n-1]]) vb[b[n-1]]=c;

    int ans=-1;
    for(int i=0;i<2*n+1;i++){
        if(va[i]+vb[i]>ans) ans=va[i]+vb[i];
    }
    cout<<ans<<endl;
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