
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define setbits(n) __builtin_popcountll(n)

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

class DSU {
    vector<int> parent, sz;

public:
    int components;

    DSU(int n) {
        parent.resize(n);
        sz.assign(n, 1);
        iota(parent.begin(), parent.end(), 0);
        components = n;
    }

    int find(int x) {
        if (parent[x] == x) return x;
        return parent[x] = find(parent[x]);
    }

    bool unite(int u, int v) {
        u = find(u);
        v = find(v);

        if (u == v) return false;

        if (sz[u] < sz[v]) swap(u, v);

        parent[v] = u;
        sz[u] += sz[v];
        components--;

        return true;
    }
};

void solve() {
    int n,m,q;
    cin>>n>>m>>q;
    vector<array<int,3>>edges(m);
    for(auto &e:edges){
        int u,v,w;
        cin>>u>>v>>w;
        e={w,u-1,v-1};
    }
    sort(edges.begin(),edges.end());
    DSU dsu(n);
    vector<int>w;
    int ans=0;
    for(auto e:edges){
        if(dsu.unite(e[1],e[2])) {
            w.push_back(e[0]);
        }else{
            ans+=e[0];
        }
    }
    int c=dsu.components;
    // Descending order because chhote weights ko hatane ka kam profit aur bade ka jyada
    sort(w.rbegin(),w.rend());
    int s=w.size();
    vector<int>pref(s,0);
    if(s>=1) pref[0]=w[0];
    for (int i=1;i<s;i++) {
        pref[i]=pref[i-1]+w[i];
    }
    while(q--){
        int x;
        cin>>x;
        int i=0,j=s-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(w[mid]>x*(c+mid)) i=mid+1;
            else j=mid-1;
        }
        int si=i;
        int gain=(si==0?0:pref[si-1]);
        int cfd=(c*(c-1)*x)/2;
        int pfra=gain-x*(si*c+(si*(si-1))/2);
        cout<<ans+(pfra<0?0:pfra)-cfd<<" ";
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
