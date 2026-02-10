// We check from gcd
//Why?->
// if choose gcd two conditions->
// (1.) gcd does not devide any => gcd is answer
// (2.) gcd devides any => all it's devisors will be able to devide it => this is main reason we don't check for devisors/factors.
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

//string removeSize2substring(const string &s){
    //string res;
    //for(char c:s){
        //if(!res.empty()&&res.back()=='0'&&c=='1')res.pop_back();
        //else res.push_back(c);
    //}
    //return res;
//}
//string res = removeSize2substring(s);

//string removePattern(const string &s,const string &pattern){
    //string res;
    //int m=pattern.size();
    //for(char c:s){
        //res.push_back(c);
        //if(res.size()>=m&&res.substr(res.size()-m)==pattern)
            //res.erase(res.end()-m,res.end());
    //}
    //return res;
//}
//string res = removePattern(s,\"abc\");

void solve() {
    // write your solution here
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &x:v) cin>>x;
    int gd1=0,gd2=0;
    for(int i=0;i<n;i+=2) gd1=__gcd(gd1,v[i]);
    for(int i=1;i<n;i+=2) gd2=__gcd(gd2,v[i]);
    bool flag=true;
    for(int i=0;i<n;i+=2){
        if(v[i]%gd2==0){
            flag=false;
            break;
        } 
    }
    if(flag){
        cout<<gd2<<endl;
        return;
    }
    for(int i=1;i<n;i+=2){
        if(v[i]%gd1==0){
            cout<<0<<endl;
            return;
        } 
    }
    cout<<gd1<<endl;
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