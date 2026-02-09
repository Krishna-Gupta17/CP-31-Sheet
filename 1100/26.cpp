//NORMAL BINARY SEARCH
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
int finding(int key,int r,int n,vector<int>&b){
    int i=0,j=n-2-r;
    if(j<0) return -1;
    while(i<=j){
        int mid=(i+j)/2;
        if(b[mid]==key){
            return (r+mid+2);
        }else if(b[mid]>key){
            j=mid-1;
        }else i=mid+1;
    }
    return -1;
}
void solve() {
    // write your solution here
    int n;
    cin>>n;
    vector<int>a(n),b(n);
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
        a[i]=sum;
        // cout<<a[i]<<" ";
    }
    // cout<<endl;
    int y=0;
    for(int i=n-1;i>=1;i--){
        b[n-1-i]=a[i]-a[i-1];
        y+=b[n-1-i];
        b[n-1-i]=y;
    }
    b[n-1]=y+a[0];
    // for(int i=0;i<n;i++){
    //     cout<<b[i]<<" ";
    // }
    // cout<<endl;
    int x=-1;
    int maxj=0;
    for(int i=0;i<n;i++){
        x=finding(a[i],i,n,b);
        if(x!=-1){
            if(x>=maxj){
                maxj=x;
            }
        }
        x=-1;
    }
    cout<<maxj<<endl;
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