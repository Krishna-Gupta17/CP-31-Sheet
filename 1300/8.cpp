#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define setbits(n) __builtin_popcountll(n)

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

/*
template <uint32_t MOD>
struct ModularInt {
    int x = 0;

    ModularInt() {}

    ModularInt(int x) : x(x < 0 ? x + MOD : x % MOD) {}

    ModularInt(const ModularInt &other) : x(other.x) {}

    ModularInt operator+=(const ModularInt &other) {
        x += other.x;
        if (x >= MOD)
            x -= MOD;
        return *this;
    }

    ModularInt operator-=(const ModularInt &other) {
        x -= other.x;
        if (x < 0)
            x += MOD;
        return *this;
    }

    ModularInt operator*=(const ModularInt &other) {
        x = ((int)x * other.x) % MOD;
        return *this;
    }

    ModularInt power(int pw) const {
        ModularInt a(*this);
        ModularInt b = 1;
        for (; pw; pw >>= 1, a *= a)
            if (pw & 1)
                b *= a;
        return b;
    }

    ModularInt inv() const {
        return power(MOD - 2);
    }

    ModularInt operator/=(const ModularInt &other) {
        x = ((int)x * other.inv().x) % MOD;
        return *this;
    }

    bool operator==(const ModularInt &other) {
        return x == other.x;
    }

    bool operator!=(const ModularInt &other) {
        return x != other.x;
    }

    friend ModularInt operator+(const ModularInt &a, const ModularInt &b) {
        return ModularInt(a) += b;
    }

    friend ModularInt operator-(const ModularInt &a, const ModularInt &b) {
        return ModularInt(a) -= b;
    }

    friend ModularInt operator*(const ModularInt &a, const ModularInt &b) {
        return ModularInt(a) *= b;
    }

    friend ModularInt operator/(const ModularInt &a, const ModularInt &b) {
        return ModularInt(a) /= b;
    }

    friend istream& operator>>(istream& in, ModularInt& other) {
        int x;
        in >> x;
        if (x < 0)
            x += MOD;
        x %= MOD;
        other = x;
        return in;
    }

    friend ostream& operator<<(ostream& out, const ModularInt& other) {
        return out << other.x;
    }
};
using mint = ModularInt<MOD>;
*/
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

/*
int maxLengthPositive(vector<int>& v,int s) {
    int n=v.size();
    int l=0,r=0,sum=v[0];
    int maxl=0;
    while(r<n){
        // while(sum>s && l<=r){
        //     sum-=v[l];
        //     l++;
        // }
        // if(sum==s){
        //     maxl=max(maxl,r-l+1);
        // }
        // r++;
        // if(r<n) sum+=v[r];
        if(sum>s && l<=r){
            sum-=v[l];
            l++;
            continue;
        }
        else if(sum<s){
            r++;
            if(r<n) sum+=v[r];
        }
        else{
            maxl=max(maxl,r-l+1);
            r++;
            if(r<n) sum+=v[r];
        }
    }
    return maxl;
}
*/
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
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &x:v) cin>>x;
    for(int i=0;i<n;i++){
        int l=0,r=i;
        while(l<=r){
            int mid=(l+r)/2;
            if(v[mid]>=(i-mid+1)) r=mid-1;
            else l=mid+1;
        }
        cout<<i-r<<" ";
    }
    cout<<endl;
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