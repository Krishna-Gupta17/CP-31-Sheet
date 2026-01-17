//Bevakoof -> a1 % x = an % x canbe written as a1%x-an%x=0 => (a1-an)%x
//Matlb maximum devisor is nothing but (a1-an) itself
//then find gcd of them, if anywhere mixup of same and diffent,then on same cpp builtin property take care
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
    vector<int>v(n);
    for(auto &x:v){
        cin>>x;
    }
    bool flag=true;
    int i=0,j=n-1;
    while(i<j){
        if(v[i]!=v[j]){
            flag=false;
            break;
        }
        i++;
        j--;
    }
    if(flag){
        cout<<0<<endl;
        return;
    }
    int ans=0;
    while(i<j){
        ans=__gcd(ans,abs(v[i]-v[j]));
        i++;
        j--;
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