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
    int n,k,a,b;
    cin>>n>>k>>a>>b;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++) cin>>v[i].first>>v[i].second;
    int ad=LLONG_MAX,bd=LLONG_MAX;
    for(int i=0;i<k;i++){ ad=min(ad,abs(v[a-1].first-v[i].first)+abs(abs(v[a-1].second-v[i].second)));
    }
    for(int i=0;i<k;i++){ bd=min(bd,abs(v[b-1].first-v[i].first)+abs(abs(v[b-1].second-v[i].second)));
    }
    if((ad!=LLONG_MAX)&&(bd!=LLONG_MAX))cout<<min(abs(v[a-1].first-v[b-1].first)+abs(v[a-1].second-v[b-1].second),ad+bd)<<endl;
    else cout<<abs(v[a-1].first-v[b-1].first)+abs(v[a-1].second-v[b-1].second)<<endl;
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