#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

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

class SGTree {
    vector<int> seg;
public:
SGTree(int n) {
    int h=n+1;
    seg.resize(4 * h + 1);
    build(0,1,n);
}
    void build(int ind, int low, int high) {
        if (low == high) {
            seg[ind] = 0;
            return;
        }
        int mid = (low + high) / 2;
        build(2 * ind + 1, low, mid);
        build(2 * ind + 2, mid + 1, high);
        seg[ind] = 0;
    }
    void update(int ind, int low, int high, int l, int r, int x,vector<int>&ans) {
        if(seg[ind]==-1) return;
        if (low == high) {
            if(low!=x){
                ans[low]=x;
                seg[ind] = -1;
            }
            return;
        }
        int mid = (low + high) >> 1;
        // complete overlap
        if (l<=low && r>=high){
            update(2*ind+1,low,mid,l,r,x,ans);
            update(2*ind+2,mid+1,high,l,r,x,ans);
        }
        // No overlap to kabhi hoga hi nii 
        else{
            if(l>mid) update(2*ind+2,mid+1,high,l,r,x,ans);
            else if(r<=mid) update(2*ind+1,low,mid,l,r,x,ans);
            else{
                update(2*ind+1,low,mid,l,r,x,ans);
                update(2*ind+2,mid+1,high,l,r,x,ans);
            }
        }
        seg[ind] = (seg[2 * ind + 1]==-1 && seg[2 * ind + 2]==-1) ? -1:0;
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
    vector<int>ans(n+1,0);
    SGTree sg1=SGTree(n);
    for(int i=0;i<m;i++){
        int l,r,x;
        cin>>l>>r>>x;
        sg1.update(0,1,n,l,r,x,ans);
    }
    for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
    cout<<endl;
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