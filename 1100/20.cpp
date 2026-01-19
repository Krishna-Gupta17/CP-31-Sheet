//In 2nd approach i was first finding sum then only checking is sum/2, sum/3... first possible will be maximum,
// because to pass (sum-1), min sum should be (sum-1)+(sum-1) which will be greter than sum , if (sum-1)!=sum/2
// then checking for gcd 
//In first approach-> We observed that no need to check for sum/2, sum/3....
//because max gcd will exist when 2 segement will be there only.
//Because that will be always smaller or eqal to gcd finded 
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

int check(vector<int>&p,int n,int sum){
    int s=0;
    for(int i=0;i<n-1;i++){
            s=max(s,__gcd(p[n-1]-p[i],p[i]));
    }
    return max((int)1,s);
}
void solve() {
    // write your solution here
    int n;
    cin>>n;
    vector<int>p(n);
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>p[i];
        sum+=p[i];
        p[i]=sum;
    }
    int ans1=check(p,n,sum);
    cout<<ans1<<endl;
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







// 2nd Approach -> not optimized i am checking for those which i don't need 

// #include <bits/stdc++.h>
// using namespace std;

// #define endl '\n'
// #define int long long

// const int MOD = 1e9 + 7;
// const int INF = LLONG_MAX >> 1;

// //vector<int> sieve(int n) {
//     //vector<int> primes(n + 1, 1);
//     //primes[0] = primes[1] = 0;
//     //for (int i = 2; i * i <= n; i++) {
//         //if (primes[i] == 1) {
//             //for (int j = i * i; j <= n; j += i) {
//                 //primes[j] = 0;
//             //}
//         //}
//     //}
//     //return primes;
// //}
// //vector<int>primes=sieve(n);

// //string removeSize2substring(const string &s){
//     //string res;
//     //for(char c:s){
//         //if(!res.empty()&&res.back()=='0'&&c=='1')res.pop_back();
//         //else res.push_back(c);
//     //}
//     //return res;
// //}
// //string res = removeSize2substring(s);

// //string removePattern(const string &s,const string &pattern){
//     //string res;
//     //int m=pattern.size();
//     //for(char c:s){
//         //res.push_back(c);
//         //if(res.size()>=m&&res.substr(res.size()-m)==pattern)
//             //res.erase(res.end()-m,res.end());
//     //}
//     //return res;
// //}
// //string res = removePattern(s,\"abc\");

// int check(vector<int>&p,int n,int sum){
//     int k=1;
//     while((sum/(k+1)>0)&&(k<=n)&&(n>1)){
//         int cnt=0;
//         int x=k+1;
//         while(x--){
//             int idx=lower_bound(p.begin(),p.end(),(sum/(k+1))*(cnt+1))-p.begin();
//             if(p[idx]!=(sum/(k+1))*(cnt+1)) break;
//             if(cnt==k){
//              if(idx!=n-1) break;
//             }
//             cnt++;
//         }
//         if(cnt==k+1){
//             return sum/(k+1);
//         }
//         k++;
//     }
//     int s=0;
//     for(int i=0;i<n-1;i++){
//             s=max(s,__gcd(p[n-1]-p[i],p[i]));
//     }
//     return max((int)1,s);
// }
// void solve() {
//     // write your solution here
//     int n;
//     cin>>n;
//     vector<int>v(n),p(n);
//     int sum=0;
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//         sum+=v[i];
//         p[i]=sum;
//     }
//     int ans1=check(p,n,sum);
//     sum=0;
//     for(int i=n-1;i>=0;i--){
//         sum+=v[i];
//         p[n-1-i]=sum;
//     }
//     cout<<max(ans1,check(p,n,sum))<<endl;;
// }

// signed main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int tc;
//     cin >> tc;
//     while (tc--) {
//         solve();
//     }
//     return 0;
// }