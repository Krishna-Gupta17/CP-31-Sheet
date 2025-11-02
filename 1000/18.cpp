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
    int w,h;
    cin>>w>>h;
    int area=INT_MIN;
    for(int j=0;j<4;j++){
        int k;
        cin>>k;
        int a,b;
        int x;
        for(int i=0;i<k;i++){
            cin>>x;
            if(i==0) a=x;
            if(i==k-1) b=x;
        }
        int B=b-a;
        if(j<=1) x=h;
        else x=w;
        area=max(area,B*x);
    }
    cout<<area<<endl;
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