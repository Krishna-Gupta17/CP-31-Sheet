//if any numbers duplicate it is pretty obvious that answer will be "YES" because we can take l1=r1 and l2=r2;
//But if no duplicates => answer is "NO". -_-
//Why?-> if b=k => it turns kth bit to set bit.
// For example adding two numbers, 16+4 => 10100.
// so to make it from other numbers i need two number again to make 5th bit and 3rd bit set again by addition.
// => 2^4 = 16 =>> it is duplicate of 16 and 2^2 = 4 =>> it is duplicate of 4, but in start we have assumed that no duplicate in b.
//=> If no duplicates => Answer is no 
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
    vector<int>v(n);
    int x;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int cnt=1;
    for(int i=0;i<n-1;i++){
        if(v[i]==v[i+1]) cnt++;
        else{
            if(cnt>1){
                 cout<<"YES"<<endl;
                 return;
            }
            cnt=1;
        }
    }
     if(cnt>1){
                 cout<<"YES"<<endl;
                 return;
            }
    cout<<"NO"<<endl;
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