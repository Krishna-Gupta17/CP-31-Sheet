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
    string s;
    cin>>s;
    int c1=0,d1=0;
    int c2=0,d2=0;
    for(int i=0;i<n;i++){
        if(s[i]=='<'){
            c1++;
            if(d2<c2) d2=c2;
            c2=0;
        } 
        else{
            c2++;
            if(d1<c1) d1=c1;
            c1=0;
        }
    }
    d1=max(c1,d1);
    d2=max(c2,d2);
    cout<<max(d1,d2)+1<<endl;
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