#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

class SGTree {
    int h;
    vector<int> seg;
public:
   SGTree(int n) {
        h=n;
        n=1<<n;
        seg.resize(4 * n + 1);
   }
   void build(int ind, int low, int high, vector<int>&arr, int cnt) {
       if (low == high) {
           seg[ind] = arr[low];
           return;
       }
       int mid = (low + high) / 2;
       build(2 * ind + 1, low, mid, arr,cnt+1);
       build(2 * ind + 2, mid + 1, high, arr,cnt+1);
       if((h-cnt)%2!=0) seg[ind] = (seg[2 * ind + 1] | seg[2 * ind + 2]);
       else seg[ind] = (seg[2 * ind + 1] ^ seg[2 * ind + 2]);
   }
   int query() {
       return seg[0];
   }
   void update(int ind, int low, int high, int i, int val, int cnt) {
       if (low == high) {
           seg[ind] = val;
           return;
       }
       int mid = (low + high) >> 1;
       if (i <= mid) update(2 * ind + 1, low, mid, i, val, cnt+1);
       else update(2 * ind + 2, mid + 1, high, i, val, cnt+1);
       if((h-cnt)%2!=0) seg[ind] = (seg[2 * ind + 1] | seg[2 * ind + 2]);
       else seg[ind] = (seg[2 * ind + 1] ^ seg[2 * ind + 2]);
   }
};

//Remove consecutive same and put only one
//v.resize(unique(v.begin(),v.end())-v.begin());

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
    int n,m;
    cin>>n>>m;
    int h=n;
    n=1<<n;
    vector<int>v(n);
    for(auto &x:v) cin>>x;
    SGTree sg1(h);
    sg1.build(0,0,n-1,v,0);
    for(int i=0;i<m;i++){
        int idx,val;
        cin>>idx>>val;
        sg1.update(0,0,n-1,idx-1,val,0);
        cout<<sg1.query()<<endl;
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    tc=1;
    while (tc--) {
        solve();
    }
    return 0;
}