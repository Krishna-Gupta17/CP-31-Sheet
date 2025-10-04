#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// void solve() {
//     // write your solution here
//     int a,b;
//     cin>>a>>b;
//     int x1,y1,x2,y2;
//     cin>>x1>>y1>>x2>>y2;
//     set<pair<int,int>>x,y;
//     int xc=x1+a;
//     int yc=y1+b;
//     x.insert({xc,yc}); 
//     yc=y1-b;
//     x.insert({xc,yc});
//     xc=x1-a;
//     yc=y1+b;
//     x.insert({xc,yc});
//     yc=y1-b;
//     x.insert({xc,yc});
//     yc=y1+a;
//     xc=x1+b;
//     x.insert({xc,yc});
//     xc=x1-b;
//     x.insert({xc,yc}); 
//     yc=y1-a;
//     xc=x1+b;
//     x.insert({xc,yc});
//     xc=x1-b;
//     x.insert({xc,yc}); 
    

//      xc=x2+a;
//      yc=y2+b;
//     y.insert({xc,yc});
//     yc=y2-b;
//     y.insert({xc,yc});
//     xc=x2-a;
//     yc=y2+b;
//     y.insert({xc,yc});
//     yc=y2-b;
//     y.insert({xc,yc});
//     yc=y2+a;
//     xc=x2+b;
//     y.insert({xc,yc});
//     xc=x2-b;
//     y.insert({xc,yc}); 
//     yc=y2-a;
//     xc=x2+b;
//     y.insert({xc,yc});
//     xc=x2-b;
//     y.insert({xc,yc});
//    int count=0;
//    for(auto p: x){
//       if(y.find(p)!=y.end()) count++;
//     }
//     cout<<count<<endl;
// }

int dx[4]={1,-1,-1,1}, dy[4]={1,1,-1,-1};       

void solve(){
    int a,b;
    cin>>a>>b;
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2; 
    set<pair<int,int>>x,y;
    for(int i=0;i<4;i++){
      x.insert({x1+dx[i]*a,y1+dy[i]*b});
      x.insert({x1+dx[i]*b,y1+dy[i]*a});

      y.insert({x2+dx[i]*a,y2+dy[i]*b});
      y.insert({x2+dx[i]*b,y2+dy[i]*a});
    }
    int count=0;
   for(auto p: x){
      if(y.find(p)!=y.end()) count++;
    }
    cout<<count<<endl;
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









