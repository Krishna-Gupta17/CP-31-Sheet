#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    string s;
	    cin>>s;
	    vector<int>v(n,-1);
	    for(int i=0;i<n-k;i++){
	       if(v[i]==-1){
	           v[i]=0;
	           v[i+k]=1;
	       }
	       else if(v[i]==1){
	           v[i+k]=0;
	       }
           else{
            v[i+k]=1;
           }
	    }
        int z=0;
        int o=0;
	    for(int i=0;i<n;i++){
            if(v[i]==0) z++;
            else if(v[i]==1) o++;
        }
        int z1=0;
        int o1=0;
	    for(int i=0;i<n;i++){
            if(s[i]=='0') z1++;
            else o1++;
        }
        // if((z1>=z && o1>=o)||(z1>=o && o1>=z) ) cout<<"YES"<<endl;
        // else cout<<"NO"<<endl;
        for(int i=0;i<n;i++) cout<<v[i]<<" ";
        cout<<endl;
	}
}
