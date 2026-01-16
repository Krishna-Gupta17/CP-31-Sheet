//IF K==0 cost for a->b->c is greater than or equak to a->c. See image
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
int k;
int dist(vector<pair<pair<int,int>,int>>&v,int x1,int x2){
    if((v[x1].second<=k-1)&&(v[x2].second<=k-1)) return 0;
    else return abs(v[x2].first.first-v[x1].first.first)+abs(v[x2].first.second-v[x1].first.second);
}
void solve() {
    // write your solution here
    int n,a,b;
    cin>>n>>k>>a>>b;
    vector<pair<pair<int,int>,int>>v(n);
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        v[i].first.first=x;
        cin>>x;
        v[i].first.second=x;
        v[i].second=i;
    }
    if(((k>=a)&&(k>=b))||(a==b)){
        cout<<0<<endl;
        return;
    }
    sort(v.begin(),v.end());
    int ai=-1,bi=-1;
    for(int i=0;i<n;i++){
        if(v[i].second==a-1) ai=i;
        if(v[i].second==b-1) bi=i;
    }
        int al=LLONG_MAX,ar=LLONG_MAX,bl=LLONG_MAX,br=LLONG_MAX;
        bool flag1=false;
        for(int i=bi;i>=0;i--){
            if(v[i].second<=k-1){
                flag1=true;
                bl=min(bl,dist(v,bi,i));
            }
        }
        bool flag2=false;
        for(int i=bi;i<n;i++){
            if(v[i].second<=k-1){
                flag2=true;
                br=min(br,dist(v,bi,i));
            }
        }
        bool flag3=false;
        for(int i=ai;i>=0;i--){
            if(v[i].second<=k-1){
                flag3=true;
                al=min(al,dist(v,ai,i));
            }
        }
        bool flag4=false;
        for(int i=ai;i<n;i++){
            if(v[i].second<=k-1){
                flag4=true;
                ar=min(ar,dist(v,ai,i));
            }
        }
        int st=min(ai,bi);
        int ed=max(ai,bi);
        int t=dist(v,st,ed);
        for(int i=st;i<ed;i++){
            t=min(t,dist(v,st,i)+dist(v,i,ed));
        }
        if((bl!=LLONG_MAX)&&(al!=LLONG_MAX)&&(flag1==true)&&(flag3==true)) t=min(t,al+bl);
        if((al!=LLONG_MAX)&&(br!=LLONG_MAX)&&(flag3==true)&&(flag2==true)) t=min(t,al+br);
        if((bl!=LLONG_MAX)&&(ar!=LLONG_MAX)&&(flag1==true)&&(flag4==true)) t=min(t,ar+bl);
        if((br!=LLONG_MAX)&&(ar!=LLONG_MAX)&&(flag2==true)&&(flag4==true)) t=min(t,ar+br);
        cout<<t<<endl;
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