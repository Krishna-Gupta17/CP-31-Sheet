#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    // write your solution here
    int a,b,c;
    cin>>a>>b>>c;
    vector<int>v(c);
    int sum=b;
    int x=0;
    for(int i=0;i<c;i++){
        cin>>v[i];
        if(v[i]>=a){
            v[i]=a-1;
        }
    }
    sort(v.begin(),v.end());
    for(int i=0;i<c;i++){
        sum+=v[i];
        if(sum==a){
            x+=sum;
            x--;
            sum=1;
        }
        else if(sum>a) {
            sum-=v[i];
            x+=sum;
            x--;
            sum=1;
            sum+=v[i];
            if(sum==a){
            x+=sum;
            x--;
            sum=1;
        }
        }
    }
    cout<<x+sum<<endl;
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