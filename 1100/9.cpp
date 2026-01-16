#include <bits/stdc++.h>
using namespace std;

#define int long long
int c;
int check(vector<int>&v,int n,int m) {
    int s=0;
    for(int i=0;i<n;i++){
        int t=v[i]+2LL*m;
        s+=t*t;
        if(s>c) return s;
    }
    return s;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    cin>>x;
    while(x--){
        int n;
        cin>>n>>c;
        vector<int>v(n);
        for(auto &x:v) cin>>x;

        int lo=0,hi=1e9,ans=-1;
        while(lo<=hi) {
            int m=lo+(hi-lo)/2;
            int val=check(v,n,m);
            if(val==c) {
                ans=m;
                break;
            }
            else if(val>c) {
                hi=m-1;
            } else{
                lo=m+1;
            }
        }

        cout<<ans<<'\n';
    }
}