#include<bits/stdc++.h>
using namespace std;

/// Solution by Aditya Jamwal

signed main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int result=(a+b)&1;
        if(result) cout<<"Alice"<<endl;
        else cout<<"Bob"<<endl;
    }
    return 0;
}
