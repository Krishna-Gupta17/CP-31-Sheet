//Loop will never infinite because there always exist a fair number 
// ex-> if n=333 => x<=400
// if n=9000000001 => x<= 10000000000
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

int fair(int n){
    string s=to_string(n);
    for(int i=0;i<s.size();i++){
        int ch=s[i];
        int num=ch-'0';
        if(num==0) continue;
        if(n%num!=0){
            return 1;
        }
    }
    return 0;
}

void solve() {
    // write your solution here
    int n;
    cin>>n;
    while(fair(n)){
        n++;
    }
    cout<<n<<endl;
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