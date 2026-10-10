#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define setbits(n) __builtin_popcountll(n)

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

/*
// T.C. => O(sqrt(n))
int countDivisors(long long n) {
    int cnt = 0;
    for (long long i = 1; i <= n / i; i++) {
        if (n % i == 0) {
            cnt += (i == n / i ? 1 : 2);
        }
    }
    return cnt;
}
*/
/*
class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
/*
class SGTree {
    vector<int> seg;
public:
SGTree(int n) {
   seg.resize(4 * n + 1);
}
void build(int ind, int low, int high, int arr[]) {
        if (low == high) {
            seg[ind] = arr[low];
            return;
        }
        int mid = (low + high) / 2;
        build(2 * ind + 1, low, mid, arr);
        build(2 * ind + 2, mid + 1, high, arr);
        seg[ind] = min(seg[2 * ind + 1], seg[2 * ind + 2]);
    }
    int query(int ind, int low, int high, int l, int r) {
        // no overlap
        // l r low high or low high l r
        if (r < low || high < l) return INT_MAX;
        // complete overlap
        // [l low high r]
        if (low >= l && high <= r) return seg[ind];
        int mid = (low + high) >> 1;
        int left = query(2 * ind + 1, low, mid, l, r);
        int right = query(2 * ind + 2, mid + 1, high, l, r);
        return min(left, right);
    }
    void update(int ind, int low, int high, int i, int val) {
        if (low == high) {
            seg[ind] = val;
            return;
        }
        int mid = (low + high) >> 1;
        if (i <= mid) update(2 * ind + 1, low, mid, i, val);
        else update(2 * ind + 2, mid + 1, high, i, val);
        seg[ind] = min(seg[2 * ind + 1], seg[2 * ind + 2]);
    }
};
*/

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

// 1e5 = 100000.0 which is double so array will give error since array size must be integer.
// 1. Why does the array give an error?
// int vis[1e5 + 5];
// - 1e5 is a double, so 1e5 + 5 is also a double.
// - A built-in array requires an integral constant expression for its size.
// - Therefore, this declaration is invalid in standard C++.
// 2. Why does the vector work?
// vector<int> adj(1e5 + 5);
// Here, 1e5 + 5 is passed as an argument to the vector constructor.
// The constructor expects a size_type (an unsigned integer type). C++ implicitly converts the double value 100005.0 to that integer type.
// Since the value is exactly representable as an integer, the conversion is valid.
vector<int>adj[100005];
int vis[100005];
void dfs(int node){
    cout<<node<<" ";
    vis[node]=1;
    for(int i=0;i<adj[node].size();i++){
        if(vis[i]==0) dfs(i);
    }
}
void solve() {
    // write your solution here
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
    for(int i=1;i<=n;i++){
        if(vis[i]==0) dfs(i);
    }
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