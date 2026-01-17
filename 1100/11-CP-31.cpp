// K ka matlb 
//starting se 0 , ending se K then starting se K , ending se 0
//starting se 1 , ending se K-1 then starting se K-1 , ending se 1
//..................
//starting se K , ending se 0 then starting se 0 , ending se K

//starting se twice kiya because minimum 2 delete krne hai
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

void solve(){
    // write your solution here
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    int sum=0;
    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        sum+=v[i];
        v[i]=sum;
    }
    int ans=LLONG_MIN;
    int st=0,end=k-st;
    while(st<=end){
        if(st!=0) ans=max(v[n-1-end]-v[2*st-1],ans);
        else ans=max(v[n-1-end],ans);
        int stn=end,endn=st;
        if(stn!=0) ans=max(v[n-1-endn]-v[2*stn-1],ans);
        else ans=max(v[n-1-endn],ans);
        st++;
        end--;
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