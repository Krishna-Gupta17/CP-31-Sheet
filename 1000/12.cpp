// #include <bits/stdc++.h>
// using namespace std;

// #define Yes cout<<'YES'<<endl
// #define No cout<<'NO'<<endl
// #define endl '\n'
// #define int long long

// const int MOD = 1e9 + 7;
// const int INF = LLONG_MAX >> 1;

// void solve() {
//     // write your solution here
//     int n,k;
//     cin>>n>>k;
//     vector<int>v(n);
//     for(auto i:v) cin>>i;
//     sort(v.begin(),v.end());
//     if(n%2==0){
//         int ans=0;
//     for(int i=0;i<n-1;i+=2){
//         ans+=(v[i+1]-v[i]);
//     } 
//     cout<<ans<<endl;
//     }
//     else{
        
//     }
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
    int n,k,b,s;
    cin>>n>>k>>b>>s;
    if(k*b>s){
        cout<<-1<<endl;
        return;
    }
    int maxs=(n)*(k-1)+k*b;
    if(s>maxs){
        cout<<-1<<endl;
        return;
    }
    if(k==1){
        if(k*b==s){
            cout<<k*b<<" ";
            for(int i=1;i<n;i++) cout<<0<<" ";
            cout<<endl;
        }
        else cout<<-1<<endl;
        return;
    }
    int addP=(s-k*b)/(k-1);
    int extra=0;
    if((s-k*b)%(k-1)!=0){
         extra=(s-k*b)%(k-1);
    }
    vector<int>v(n);
    v[0]=k*b;
    if(extra==0){
        if(addP==0){
                for(auto x:v) cout<<x<<" ";
                return;
        }
        if(addP!=0) v[0]+=k-1;
        for(int i=1;i<addP;i++) v[i]=k-1;
    }else{
        v[0]+=extra;
        for(int i=1;i<=addP;i++) v[i]=k-1;
    }
    for(auto x:v) cout<<x<<" ";
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