//pure k operation karne hai
// pehle diffrent cnt nikalo
// observe agar n%2!=0 center kisi se match karane ki jarurat nhi mtlb kuchh bhi paint kro koi mtlb nii (kyuki ghumta rahega wo)
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
    int n,k;
    cin>>n>>k;
    vector<int>v(n*n);
    for(auto &x:v) cin>>x;
    int i=0,j=n*n-1;
    int cnt=0;
    while(i<j){
        if(v[i]!=v[j]) cnt++;
        i++;
        j--;
    }
    if(cnt<=k){
        if((k-cnt)%2==0){
            cout<<"YES"<<endl;
        }
        else{
            if((n%2!=0)) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    else cout<<"NO"<<endl;
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