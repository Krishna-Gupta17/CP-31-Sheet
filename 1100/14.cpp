//Simple approach just first go through one side, no need for going from other side observe
//once done above then check how more lesser or greater ( lesser for left to right and greater for right to left depending on side choosen) we can include
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
    int n;
    cin>>n;
    vector<pair<int,int>>a(n);
    vector<int>b(n);
    for(int i=0;i<2*n;i++){
        if(i<n){
            cin>>a[i].first;
            a[i].second=i;
        }
        else cin>>b[i-n];
    }
    int i=0,j=0;
    bool flag=true;
    int mini=LLONG_MAX;
    while(j<n-1){
        if(a[j].first==b[j]&&flag){
            i++;
            j++;
        }
        else{
            flag=false;
            if(b[j]<=b[j+1]){
                mini=min(mini,b[j]);
                j++;
            }
            else break;
        }
    }
    mini=min(mini,b[j]);
    if(i<=0){
        cout<<i+1<<" "<<j+1<<endl;
        return;
    }
    for(int k=i-1;k>=0;k--){
        if(a[k].first<=mini){
            mini=a[k].first;
            i--;
        }else break;
    }
    cout<<i+1<<" "<<j+1<<endl;
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