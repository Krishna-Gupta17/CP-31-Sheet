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
    int b=-1;
    vector<int>v(26,0);
    vector<int>p;
    vector<int>su;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(v[s[i]-'a']==0){
            cnt++;
            p.push_back(cnt);
            v[s[i]-'a']++;
        }
        else{
            p.push_back(cnt);
        }
    }
    for(int i=0;i<26;i++){
        v[i]=0;
    }
    cnt=0;
    for(int i=n-1;i>=0;i--){
        if(v[s[i]-'a']==0){
            cnt++;
            su.push_back(cnt);
            v[s[i]-'a']++;
        }
        else{
            su.push_back(cnt);
        }
    }
    int max=p[n-1];
    for(int i=0;i<n-1;i++){
        if(p[i]+su[n-i-2]>max) max=p[i]+su[n-i-2];
    }
    cout<<max<<endl;
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