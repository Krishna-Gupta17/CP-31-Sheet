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
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
    }
    if(n%2==0){
    cout<<2<<endl;
    cout<<1<<" "<<n<<endl;
    cout<<1<<" "<<n<<endl;
    }
    else{
    cout<<4<<endl;
    cout<<1<<" "<<n-1<<endl;
    cout<<1<<" "<<n-1<<endl;
    cout<<n-1<<" "<<n<<endl;
    cout<<n-1<<" "<<n<<endl;
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