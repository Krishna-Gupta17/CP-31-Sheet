//MY APPROACH -> 
// 2 x hi honge jinke liye check krna padega
// un dono ki sari occurence hi remove kr di greedily
// Why?->
// For example- 1 4 4 1 4
// starting mein pehle check kiya ki kaha se palindrome break ho rhi hai
// ab jaha break hogi waha se do possibility hogi 
// ya to 1 remove krke check kru ya 4
// you should think why we removed all occurence of x;
// because 4...4
//agar isse sare 4 remove kr diye to dono side se 4 remove honge aur agar pehle palindrome thi to abhi bhi bani rahegi


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
bool check1(int x,vector<int>&v){
    vector<int>y;
    for(int i=0;i<v.size();i++){
        if(v[i]!=x) y.push_back(v[i]);
    }
    int i=0,j=y.size()-1;
    while(i<j){
        if(y[i]!=y[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
void solve() {
    // write your solution here
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &x:v) cin>>x;
    int i=0,j=n-1;
    bool flag=true;
    while(i<j){
        if(v[i]!=v[j]){
            flag=false;
            break;
        }
        i++;
        j--;
    }
    if(flag){
        cout<<"YES"<<endl;
        return;
    }
    if(check1(v[i],v)||check1(v[j],v)){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
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