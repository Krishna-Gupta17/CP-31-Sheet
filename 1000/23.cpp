//We will find exactly 4 devisors, because if a number has 5 devisors,definately it will be greater than number having 4 devisors.
//Generally devisors of a nummber => if(p1^a1,p2^a2,p3^a3,....) are factors=>> no of devisors=>(a1+1)*(a2+1)*(a3+1)...
// for 4 divisors 2 cases => (a1+1)*(a2+1)*(a3+1)*...= 4*1*1*..=>a1=3 =>> p1^3
// And if(p1>=d+1) soch ke dekho jo bhi divisors honge min distance d ke honge.
//OR
//(a1+1)*(a2+1)*(a3+1)*...= 2*2*1*..a1=1 and a2=1 =>> p1*p2
// And if(p1>=d+1) if(p2>=p1+d) soch ke dekho jo bhi divisors honge min distance d ke honge.

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<int>sieve(int n){
    vector<int>primes(n+1,1);
    primes[0]=0;
    primes[1]=0;
    for(int i=2;i*i<=n;i++){
        if(primes[i]==1){
            for(int j=i*i;j<=n;j+=i){
                primes[j]=0;
            }
        }
    }
    return primes;
}
void solve() {
    // write your solution here
    int d;
    cin>>d;
    vector<int>primes=sieve(20012);
    int i;
    for(i=1+d;i<20010;i++){
        if(primes[i]==1) break;
    }
    int ans=i;
    i+=d;
    while(i<=20012){
        if(primes[i]==1) break;
        i++;
    }
    cout<<min(ans*ans*ans,ans*i)<<endl;
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