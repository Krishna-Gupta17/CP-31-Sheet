//2 observations
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
    int n,q;
    cin>>n>>q;
    vector<int>v(n),c(q);
    for(int i=0;i<n;i++) cin>>v[i];
    for(int i=0;i<q;i++) cin>>c[i];
    int prev=31;  // 1 -> helps in tle
    for(int i=0;i<q;i++){
        if(c[i]>=prev) continue; // because if 2^x se check kr liya aur koi divisible ho ya na ho dono case mein >=2^(x) se kuchh nii hoga
        // becaue if divisible after addition bits 10000 to 11000 and >=2^4 never devide possible because needs 4 or greater than 4 zero but remains at 3.
        // if not divisible by 2^x, then >=2^x division is not possible (factors of number think)
        int p=1LL<<c[i];
        for(int j=0;j<n;j++){  // max n*30 times in worst case
          if((v[j]%p)==0){   // only one time devisible is possible from 2^c[i]
            // because after adding 2^(c[i]-1) can't be divisible by any number >= 2^
            v[j]+=((p/2));  
          }
        } 
        prev=min(prev,c[i]);
    }
    for(int j=0;j<n;j++){
        cout<<v[j]<<" ";
    }
    cout<<endl;
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