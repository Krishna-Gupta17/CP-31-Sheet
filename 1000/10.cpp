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
    char c;
    cin>>n>>c;
    string s;
    cin>>s;
    int ans=0;
    for(int i=0;i<n;i++){
        if(s[i]==c){
            int j=i;
            while(s[j]!='g'){
               if(j<n) j++;
               else j=0;
            }
            int d;
            if(j>=i){
                  d=j-i;
                  if(d>ans) ans=d;
                  i=j;
            }
            else{
                 d=(n-1-i+j+1);
                 if(d>ans) ans=d;
                 break;
            }
            
        }
    }
    cout<<ans<<endl;
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
