#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    int n=s.size();
    int j=0;
    while(j+1<n){
    int i=j;
    while(j+1<n && s[j]==s[j+1]) j++;
    if(i==j){
        j++;
        continue;
    }
    i++;
    while(i<j){
        s[i]=(s[i]-'a'+1)%26+'a';
        i+=2;
    }
    if(i==j){
        if(s[i-1]==s[i]){
        if(j==n-1) s[j]=(s[j]-'a'+1)%26+'a';
        else if((s[j]-'a'+1)%26+'a'==s[j+1]) s[j]=(s[j]-'a'+25)%26+'a';
        else s[j]=(s[j]-'a'+1)%26+'a';
        }
    }
    j++;
    }
    cout<<s;
}
int main() {
    int t=1;
    //cin>>t;
    while(t--){
        solve();
      //cout<<endl;
    } 
}
    