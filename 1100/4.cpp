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
            //for (int i = i * i; i <= n; i += i) {
                //primes[i] = 0;
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
    vector<pair<int,int>>s;
    cin>>v[0];
    int x=abs(v[0]%2);
    int m=v[0];
    int c=v[0];
    for(int i=1;i<n;i++){
         cin>>v[i];
         if(x==abs(v[i]%2)) c=v[i];
         else{
            int f=c+v[i];
            int s=v[i];
            c=max(f,s);
         }
         m=max(m,c);
         x=abs(v[i]%2);
    }
    cout<<m<<endl;
    // for(int i=0;i<s.size();i++) cout<<"{"<<s[i].first<<" "<<s[i].second<<"}";
    // cout<<endl;
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