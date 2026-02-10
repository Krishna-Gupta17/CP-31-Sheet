#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end());
        bool flag=true;
        for(int i=0;i<n;i++){
            int key=v[i]-k;
            int a=0,b=i,c=i+1,d=n-1;
            while(a<=b){
                int m=(a+b)/2;
                if(v[m]>key) b=m-1;
                else if(v[m]<key) a=m+1;
                else{
                    cout<<"YES"<<endl;
                    flag=false;
                    break;
                }
            }
            if(!flag) break;
            while(c<=d){
                int m=(c+d)/2;
                if(v[m]>key) d=m-1;
                else if(v[m]<key) c=m+1;
                else{
                    cout<<"YES"<<endl;
                    flag=false;
                    break;
                }
            }
            if(!flag) break;
        }
        if(flag) cout<<"NO"<<endl;
    }
}