// //Brute force O(n*q) works but not optimized much 

//Optimized O(50*q) -> see we don't need to shift for repeated because first one will be always choosen
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
    vector<int>v(51,-1);
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        if(v[x]==-1) v[x]=i;
    }
    for(int i=0;i<q;i++){
        cin>>x;
        int r=v[x];
        cout<<r+1<<" ";
        for(int j=1;j<51;j++){
            if(v[j]<r) v[j]++;
        }
        v[x]=0;
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



// //Brute force->
// #include <bits/stdc++.h>
// using namespace std;

// #define endl '\n'
// #define int long long

// const int MOD = 1e9 + 7;
// const int INF = LLONG_MAX >> 1;

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

// void solve() {
//     // write your solution here
//     int n,q;
//     cin>>n>>q;
//     vector<int>v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     int x;
//     for(int i=0;i<q;i++){
//         cin>>x;
//         int prev=v[0];
//         if(x==prev){
//             cout<<1<<" ";
//             continue;
//         }
//         for(int j=1;j<n;j++){
//             if(x==v[j]){
//                 int temp=v[j];
//                 v[j]=prev;
//                 v[0]=temp;
//                 cout<<j+1<<" ";
//                 break;
//             }else{
//                 int temp=v[j];
//                 v[j]=prev;
//                 prev=temp;
//             }
//         }
//     }
//     cout<<endl;
// }

// signed main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int tc;
//     // cin >> tc;
//     tc=1;
//     while (tc--) {
//         solve();
//     }
//     return 0;
// }