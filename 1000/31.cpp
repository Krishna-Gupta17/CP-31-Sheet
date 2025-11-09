#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

//vector<int> sieve(int n) {
    //vector<int> primes(n + 1, 1);
    //primes[0] = primes[1] = 0;
    //for (int i = 2; i * i <= n; i++) {
        //if (primes[i] == 1) {
            //for (int j = i * i; j <= n; j += i) {
                //primes[j] = 0;
            //}
        //}
    //}
    //return primes;
//}
//vector<int>primes=sieve(n);

void solve() {
    // write your solution here
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(is_sorted(s.begin(),s.end()))
        cout<<"NO\n";
    else{
        cout<<"YES\n";
        for(int i=0;i<n-1;i++){
            if(s[i+1]<s[i]){
                cout<<i+1<<" "<<i+2<<endl;
                return;
            }
        }
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    // cin >> tc;
    tc=1;
    while (tc--) {
        solve();
    }
    return 0;
}