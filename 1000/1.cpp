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
    string s;
    cin>>s;
    int zero=0,one=0;
    int x=s.size();
    for(int i=0;i<x;i++){
        if(s[i]=='0') zero++;
        else one++;
    }
    int i;
    for( i=0;i<x;i++){
        if(s[i]=='0'){
            if(one>0) one--;
            else break;
        } 
        else{
            if(zero>0) zero--;
            else break;
        } 
    }
    cout<<x-i<<endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}