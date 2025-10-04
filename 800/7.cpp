#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    // write your solution here
    int n,k;
    cin>>n>>k;
    string x;
    cin>>x;
    string s;
    cin>>s;

    if (x.find(s) != string::npos) {
            cout<<0<<endl;
            return;
    }
        string c=x;
        c+=c;
        if (c.find(s) != string::npos) {
            cout<<1<<endl;
            return;
        }
    int x1=x.size();
    int x2=s.size();
        int i=0;
        while((x1/x2)<=2){
             if (x.find(s) != string::npos) {
            cout<<i<<endl;
            return;
        }
        x+=x;
        x1=x.size();
        i++;
        }
        cout<<-1<<endl;
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