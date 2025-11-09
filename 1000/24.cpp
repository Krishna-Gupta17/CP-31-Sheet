#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
	// write your solution here
	int n,m;
	cin>>n>>m;
	vector<int>v(n*m);
	int ve=0;
	int sum=0;
	for(int i=0;i<n*m;i++){
		cin>>v[i];
		if(v[i]<=0){
			 ve++;
			 v[i]=v[i]*(-1);
		}
		 sum+=v[i];
	}
	ve=ve%2;
	sort(v.begin(),v.end());
	for(int i=0;i<ve;i++){
		sum-=(2*v[i]);
	}
	cout<<sum<<endl;
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