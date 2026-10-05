#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// Important point : agar ek node pr open aur close dono hai to wo kuchh aise bannenge
// Example : open=1, close=1 => )(
// Example : open=2, close=1 => ))( 
// Because, mixing to pehle hi ho chuki hai to agar bach rhe hai to unse kuchh banna nii chahiye soch ke dekho

struct info{
    int open; // ye represent kr rha hai ki full banne ke baad open kitne bache
    int close; // ye represent kr rha hai ki full banne ke baad close kitne bache
    int full; // Total kitne hai
    info(int _open=0,int _close=0,int _full=0){
        this->open=_open;
        this->close=_close;
        this->full=_full;
    }
};

class SGTree {
    vector<info> seg;
    public:
    SGTree(int n) {
        seg.resize(4 * n + 1);
    }
    info merge(info left,info right){
        info ans=info(0,0,0);
        ans.full=left.full+right.full+min(left.open,right.close);
        ans.open=left.open+right.open-min(left.open,right.close);
        ans.close=left.close+right.close-min(left.open,right.close);
        return ans;
    }
    void build(int ind, int low, int high, string & s) {
        if (low == high) {
            seg[ind] = info(s[low]=='(',s[low]==')',0);
            return;
        }
        int mid = (low + high) / 2;
        build(2 * ind + 1, low, mid, s);
        build(2 * ind + 2, mid + 1, high, s); 
        seg[ind] = merge(seg[2*ind+1],seg[2*ind+2]);
   } 
   info query(int ind, int low, int high, int l, int r) {
       // no overlap
       // l r low high or low high l r
       if (r < low || high < l) return info(0,0,0);
       // complete overlap
       // [l low high r]
       if (low >= l && high <= r) return seg[ind];
       int mid = (low + high) >> 1;
       info left = query(2 * ind + 1, low, mid, l, r);
       info right = query(2 * ind + 2, mid + 1, high, l, r);
       return merge(left, right);
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
    string s;
    cin>>s;
    int m;
    cin>>m;
    int n=s.size();
    SGTree sg1=SGTree(n);
    sg1.build(0,0,n-1,s);
    for(int i=0;i<m;i++){
        int l,r;
        cin>>l>>r;
        l--,r--;
        info ans=sg1.query(0,0,n-1,l,r);
        cout<<ans.full*2<<endl;
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    // cin >> tc;
    tc=1;
    while (tc--) {
        solve();
    }
    return 0;
}