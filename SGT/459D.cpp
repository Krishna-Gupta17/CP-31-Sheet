#include <bits/stdc++.h>
using namespace std;

#define int long long

struct Node {
    int left, right, cnt;

    Node(int left = 0, int right = 0, int cnt = 0)
        : left(left), right(right), cnt(cnt) {}
};

vector<Node> seg;

int update(int prev, int low, int high, int pos) {
    int cur = seg.size();
    seg.push_back(seg[prev]);

    seg[cur].cnt++;

    if (low == high)
        return cur;

    int mid = (low + high) >> 1;

    if (pos <= mid)
        seg[cur].left = update(seg[prev].left, low, mid, pos);
    else
        seg[cur].right = update(seg[prev].right, mid + 1, high, pos);

    return cur;
}

int query(int rootR, int rootL, int low, int high, int x) {
    if (high < x)
        return seg[rootR].cnt - seg[rootL].cnt;

    if (low >= x)
        return 0;

    int mid = (low + high) >> 1;

    return query(
        seg[rootR].left,
        seg[rootL].left,
        low,
        mid,
        x
    ) + query(
        seg[rootR].right,
        seg[rootL].right,
        mid + 1,
        high,
        x
    );
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> v(n), a(n), b(n);

    map<int, int> mp1, mp2;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        mp1[v[i]]++;
        b[i] = mp1[v[i]];
    }

    for (int i = n - 1; i >= 0; i--) {
        mp2[v[i]]++;
        a[i] = mp2[v[i]];
    }

    vector<int> vals = a;

    sort(vals.begin(), vals.end());
    vals.erase(unique(vals.begin(), vals.end()), vals.end());

    int m = vals.size();

    seg.reserve(n * 20);
    seg.push_back(Node());

    vector<int> root(n + 1);

    for (int i = 0; i < n; i++) {
        int pos = lower_bound(vals.begin(), vals.end(), a[i]) - vals.begin();

        root[i + 1] = update(
            root[i],
            0,
            m - 1,
            pos
        );
    }

    int ans = 0;

    for (int i = 0; i < n; i++) {
        int x = b[i];

        int pos = lower_bound(vals.begin(), vals.end(), x) - vals.begin();

        ans += query(
            root[n],
            root[i + 1],
            0,
            m - 1,
            pos
        );
    }

    cout << ans << '\n';

    return 0;
}