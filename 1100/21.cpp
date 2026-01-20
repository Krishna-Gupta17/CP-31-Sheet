//1000 wala game
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
    vector<int>v(1001,-1);
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        v[x]=i;
    }
    int mx=-1;
    for(int i=0;i<1001;i++){
        if(v[i]!=-1){
            for(int j=0;j<1001;j++){
                if(v[j]==-1) continue;
                if(__gcd(i,j)==1) mx=max(mx,v[i]+v[j]);
            }
        }
    }
    if(mx==-1){
        cout<<-1<<endl;
        return;
    } 
    cout<<mx+2<<endl;
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