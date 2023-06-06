#include<bits/stdc++.h>
using namespace std;

string solve(int n, string &s){
    string result="";
    int i=0, j=1;
    while(i<n and j<n){
        if(s[i]==s[j]){
            result+=s[i];
            i=j+1;
            j=i+1;
        }else if(s[i]!=s[j]){
            j++;
        }
    }
    return result;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string temp=solve(n,s);
        cout<<temp<<endl;
    }
    return 0;
}
