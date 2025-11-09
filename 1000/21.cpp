#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    // write your solution here
    string a,b;
    cin>>a>>b;
    int mx=0;
    int n=a.size();
    int m=b.size();
        for(int i=0;i<(min(a.size(),b.size()));i++){
        for(int j=0;j<max(a.size(),b.size());j++){
            if(n<m){
                if(a[i]==b[j]){
                int it=1;
                while (i + it < (min(a.size(),b.size())) && j + it < (max(a.size(),b.size()))) {
                    if( a[i + it] != b[j + it]) break;
                it++;
            }
                if(it>mx) mx=it;
            }
            }
            else{
                if(b[i]==a[j]){
                int it=1;
                while (i + it < (min(a.size(),b.size())) && j + it < (max(a.size(),b.size()))) {
                    if( b[i + it] != a[j + it]) break;
                it++;
            }
                if(it>mx) mx=it;
            }
            }
        }
    }
    cout<<a.size()+b.size()-(2*mx)<<endl;
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