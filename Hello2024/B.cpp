#include<bits/stdc++.h>
using namespace std;

/// Solution by Aditya Jamwal

int helper(int n, string &str){
    int counter=0;
    for(int i=0;i<str.size();i++){
        counter+=(str[i]=='-' ? -1 : 1);
    }
return abs(counter);
}

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        int result=helper(n,str);
        cout<<result<<endl;
    }
    return 0;
}

