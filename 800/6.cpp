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
    map<int,int>m;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        m[x]++;
    }
    if(m.size()>2) {
        cout<<"No"<<endl;
        return;
    }
    if(m.size()==1){
        cout<<"Yes"<<endl;
        return;
    }
//     vector<int> v;
// for (auto &p : m) {                 //MINE
//     v.push_back(p.second);
// }
//     if(abs(v[0]-v[1])<=1) {
//         cout<<"Yes"<<endl;
//         return;
//     }
//    cout<<"No"<<endl;

int x=m.begin()->second;       //SIR
int y=m.rbegin()->second;
    if(abs(x-y)<=1) {
        cout<<"Yes"<<endl;
        return;
    }
    cout<<"No"<<endl;
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