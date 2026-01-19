//understand max 1's length will decide the area
//and 1's length subarray will be b/w two 0's
//hence observe the pattern as image
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
    int maxi=-1,prev=-1,cnt=0;
    int f=-1;
    bool flag=true;
    int i=0;
    while(i<n){
            if(s[i]=='1'){
                cnt++;
            }
            else{
                if(flag){
                    maxi=max(maxi,cnt);
                    prev=cnt;
                    f=cnt;
                    flag=false;
                    cnt=0;
                }
                else{
                    maxi=max(maxi,cnt);
                    prev=cnt;
                    cnt=0;
                }
            }
            i++;
    }
    if(cnt==n){
        cout<<n*n<<endl;
        return;
    }
    prev=cnt;
    maxi=max(maxi,cnt);
    if((s[0]=='1')&&(s[n-1]=='1')) maxi=max(maxi,prev+f);
    if(maxi<=2) cout<<maxi<<endl;
    else if(maxi==3) cout<<4<<endl;
    else if(maxi%2!=0) cout<<(maxi/2+1)*(maxi/2+1)<<endl;
    else cout<<(maxi/2)*(maxi/2+1)<<endl;
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