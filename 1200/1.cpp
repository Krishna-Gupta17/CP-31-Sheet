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

// void printv(vector<int>&v){
//     int n=v.size();
//     for(int i=0;i<n;i++) cout<<v[i]<<" ";
//     cout<<endl;
//     return;
// }
 
// void printpv(vector<pair<int,int>>&v){
//     int n=v.size();
//     for(int i=0;i<n;i++) cout<<" {"<<v[i].first<<" "<<v[i].second<<" }";
//     cout<<endl;
//     return;
// }
vector<pair<int,int>> getthree(int n){
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first;
        v[i].second=i;
    }
    sort(v.begin(),v.end(),greater<pair<int,int>>());
    vector<pair<int,int>>a;
    a.push_back(v[0]);
    a.push_back(v[1]);
    a.push_back(v[2]);
    return a;
}
void solve() {
    // write your solution here
    int n;
    cin>>n;
    auto a=getthree(n),b=getthree(n),c=getthree(n);
    int mx=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                if((a[i].second!=b[j].second) && (b[j].second!=c[k].second) && (a[i].second!=c[k].second)){
                    mx=max(mx,a[i].first+b[j].first+c[k].first);
                }
            }
        }
    }
    cout<<mx<<endl;
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