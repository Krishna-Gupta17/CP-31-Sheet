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
    int n,p;
    cin>>n>>p;
    vector<pair<int,int>>v(n);
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        v[i].first=x;
    }
    for(int i=0;i<n;i++){
        cin>>x;
        v[i].second=x;
    }
    sort(v.begin(),v.end(),[](const pair<int,int>&a,const pair<int,int>&b){
       if(a.second!=b.second) return a.second<b.second;
       else return a.first>b.first;
    });
    int cnt=1;
    int c=1;
    int ans=p;
    for(int i=0;i<n;i++){
        if((v[i].second<=p)){
            if(c>0){
                cnt+=v[i].first;
                c+=v[i].first;
                if(cnt<=n) ans+=(((v[i].first)*(v[i].second)));
                else{
                cnt-=(v[i].first);
                ans+=(n-cnt)*(v[i].second);
                break;
                }
            }
            else{
                c++;
                cnt++;
                c+=v[i].first;
                cnt+=v[i].first;
                if(cnt<=n)ans+=(p+((v[i].first)*(v[i].second)));
                else{
                    cnt-=(v[i].first+1);
                    ans+=p+(n-cnt-1)*(v[i].second);
                    break;
                }
            }
        }
        else{
            ans+=(n-cnt)*p;
            break;
        }
        c--;
    }
    cout<<ans<<endl;
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