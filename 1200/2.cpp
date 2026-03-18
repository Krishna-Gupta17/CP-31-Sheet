// We know that remainder of a number n with 10^k get us last k digits.
// Since it is given that there always exist a answer.
// We can use upper approach , but it can take much higher t.c.
// So we think in binary -> remainder of a binary number with 2^k gives last k digits of binary
// And maximum number in binary according to constrains can have max to max 60 bits
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
    int n;
    cin>>n;
    set<int>st;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        st.insert(x);
    }
    for(int k=1;k<=60;k++){
        set<int>d;
        int p=1LL<<k;
        for(auto x:st){
            d.insert(x&(p-1));
        }
        if(d.size()==2){
            cout<<p<<endl;
            return;
        }
    }
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