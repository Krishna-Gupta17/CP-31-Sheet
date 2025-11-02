// #include <bits/stdc++.h>
// using namespace std;

// #define Yes cout<<'YES'<<endl
// #define No cout<<'NO'<<endl
// #define endl '\n'
// #define int long long

// const int MOD = 1e9 + 7;
// const int INF = LLONG_MAX >> 1;

// void solve() {
//     // write your solution here
//     int n,a,b;
//     cin>>n>>a>>b;
//     if(b==1){
//         for(int i=0;i<n;i++){
//             if(i==a/2) cout<<"B";
//             else cout<<"R";
//         }
//         cout<<endl;
//         return;
//     }
//     int sizeA=a/b;
//     int rem=a%b;
//     string rs,ns,es;
//     int extra;
//     if(rem<sizeA){ 
//         for(int i=0;i<rem;i++){
//             es.push_back('R');
//         }
//         extra=0;
//     }
//     else{
//         for(int i=0;i<sizeA;i++){
//             es.push_back('R');
//         }
//         extra=rem-sizeA;
//     }
//     for(int i=0;i<sizeA;i++){
//         ns.push_back('R');
//     }
//     ns.push_back('B');
//     rs='R'+ns;
//     for(int i=0;i<extra;i++){
//         cout<<rs;
//     }
//     for(int i=0;i<b-extra;i++) cout<<ns;
//     cout<<es<<endl;
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


#include <bits/stdc++.h>
using namespace std;

#define Yes cout<<'YES'<<endl
#define No cout<<'NO'<<endl
#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    // write your solution here
    int n,a,b;
    cin>>n>>a>>b;
    int sizeA=a/(b+1);
    int rem=a%(b+1);
    for(int i=0;i<b+1;i++){
        for(int j=0;j<sizeA;j++){
            cout<<"R";
        }
        if(rem>0){
            cout<<"R";
            rem--;
        }
       if(i!=b) cout<<"B"; 
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