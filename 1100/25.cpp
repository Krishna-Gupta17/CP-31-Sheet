// TWO CONDITIONS (NECESSARY AND EFFICIENT) FOR YES->
//(1) string s should be periodic
//(2) if no of distinct chanracter in srting s is greater than 1 => no two consectuve element should occure

//WHY? ->
// ME-> 
// abcd yes
// abbcd yes
// babcd yes
// bacdb yes

//I observed that if no of distinct chanracter in srting s is greater than 1 => no two consectuve element should occure
//And between two same characters if no of distinct character is less than all diffrent chracter present in s except himself 
// => If both these occure => YES

// How i figure periodicity from my observation
// Try to create a string from char a,b,c,d for yes according to my both conditions
// Dusri condition fullfill krne ke liye agar ek se jyada baar koi character hai to un dono ke biche sare charater lane ka try karoge
// Jo end mein periodic ki trf hi refer krega 
// Bana ke hi dekho samjh jaoge


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
    string s;
    cin>>s;
    int n=s.size();
    set<char>st;
    for(int i=0;i<s.size();i++) st.insert(s[i]);
    if(st.size()==1){
        cout<<"YES"<<endl;
        return;
    }
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            cout<<"NO"<<endl;
            return;
        }
    }
    int k=st.size();
    for(int i=0;i<n-k;i++){
        if(s[i]!=s[i+k]){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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