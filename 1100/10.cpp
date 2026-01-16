//n*3 works because max size of a,b,c possible is 31
//because 1e9 -> 31 bit number, no of set bits in resultant number can be greater than or equal in prev number hence max to max 31 possibilities.
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
    int n,x;
    cin>>n>>x;
    vector<int>v(3*n);
    for(int i=0;i<3*n;i++) cin>>v[i];
    vector<int>a,b,d;
    int c=0,prev=c;
    a.push_back(0);
    for(int i=0;i<n;i++){
        if(c==x){
            cout<<"YES"<<endl;
            return;
        }
        prev=c;
        c|=v[i];
        if(c>x) break;
        if(c>prev) a.push_back(c);
    }
    c=0;
    prev=c;
    b.push_back(0);
    for(int i=n;i<2*n;i++){
        if(c==x){
            cout<<"YES"<<endl;
            return;
        }
        prev=c;
        c|=v[i];
        if(c>x) break;
        if(c>prev) b.push_back(c);
    }
    c=0;
    prev=c;
    d.push_back(0);
    for(int i=2*n;i<3*n;i++){
        if(c==x){
            cout<<"YES"<<endl;
            return;
        }
        prev=c;
        c|=v[i];
        if(c>x) break;
        if(c>prev) d.push_back(c);
    }
    for(int i=0;i<a.size();i++){  //n*3 works because max size of a,b,c possible is 31
        for(int j=0;j<b.size();j++){
            for(int k=0;k<d.size();k++){
                if((a[i]|b[j]|d[k])==x){
                    cout<<"YES"<<endl;
                    return;
                }
            }
        }
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