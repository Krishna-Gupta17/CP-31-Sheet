#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

//Remove consecutive same and put only one
//v.resize(unique(v.begin(),v.end())-v.begin());

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

//set<int> factors(int n){
    //set<int>primes;
    //if(n%2==0){
        //primes.insert(2);
        //while(n%2==0) n/=2;
    //}
    //for(int i=3;i*i<=n;i+=2){
        //if(n%i==0){
            //primes.insert(i);
            //while(n%i==0) n/=i;
        //}
    //}
    //if(n>1) primes.insert(n);
    //return primes;
//}
//O(sqrt(n)) -> A better method in log(n) is spf sieve
//set<int>primefactors=factors(n);

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
 
void solve() {
    // write your solution here
    int n,m; cin>>n>>m;
    vector<vector<int>>v(m,vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[j][i];
        }
    }
    for(int i=0;i<m;i++){
        sort(v[i].begin(),v[i].end());
    }
    int ans=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            ans+=(j*v[i][j]-(n-1-j)*v[i][j]);
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

// #include <bits/stdc++.h>
// using namespace std;

// #define endl '\n'
// #define int long long

// const int MOD = 1e9 + 7;
// const int INF = LLONG_MAX >> 1;

// //Remove consecutive same and put only one
// //v.resize(unique(v.begin(),v.end())-v.begin());

// //vector<int> sieve(int n) {
//     //vector<int> primes(n + 1, 1);
//     //primes[0] = primes[1] = 0;
//     //for (int i = 2; i * i <= n; i++) {
//         //if (primes[i] == 1) {
//             //for (int j = i * i; j <= n; j += i) {
//                 //primes[j] = 0;
//             //}
//         //}
//     //}
//     //return primes;
// //}
// //vector<int>primes=sieve(n);

// //set<int> factors(int n){
//     //set<int>primes;
//     //if(n%2==0){
//         //primes.insert(2);
//         //while(n%2==0) n/=2;
//     //}
//     //for(int i=3;i*i<=n;i+=2){
//         //if(n%i==0){
//             //primes.insert(i);
//             //while(n%i==0) n/=i;
//         //}
//     //}
//     //if(n>1) primes.insert(n);
//     //return primes;
// //}
// //O(sqrt(n)) -> A better method in log(n) is spf sieve
// //set<int>primefactors=factors(n);

// //string removeSize2substring(const string &s){
//     //string res;
//     //for(char c:s){
//         //if(!res.empty()&&res.back()=='0'&&c=='1')res.pop_back();
//         //else res.push_back(c);
//     //}
//     //return res;
// //}
// //string res = removeSize2substring(s);

// //string removePattern(const string &s,const string &pattern){
//     //string res;
//     //int m=pattern.size();
//     //for(char c:s){
//         //res.push_back(c);
//         //if(res.size()>=m&&res.substr(res.size()-m)==pattern)
//             //res.erase(res.end()-m,res.end());
//     //}
//     //return res;
// //}
// //string res = removePattern(s,\"abc\");

// // void printv(vector<int>&v){
// //     int n=v.size();
// //     for(int i=0;i<n;i++) cout<<v[i]<<" ";
// //     cout<<endl;
// //     return;
// // }
 
// // void printpv(vector<pair<int,int>>&v){
// //     int n=v.size();
// //     for(int i=0;i<n;i++) cout<<" {"<<v[i].first<<" "<<v[i].second<<" }";
// //     cout<<endl;
// //     return;
// // }
 
// void solve() {
//     // write your solution here
//     int n,m; cin>>n>>m;
//     vector<vector<int>>v(n,vector<int>(m,0));
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>v[i][j];
//         }
//     }
//     int ans=0;
//     for(int i=0;i<n-1;i++){
//         int j=i+1;
//         while(j<n){
//             for(int k=0;k<m;k++){
//                 ans+=abs(v[i][k]-v[j][k]);
//             }
//             j++;
//         }
//     }
//     cout<<ans<<endl;
// }

// signed main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int tc;
//     cin >> tc;
//     while (tc--) {
//         solve();
//     }
//     return 0;
// }