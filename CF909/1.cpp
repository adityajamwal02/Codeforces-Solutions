#include<bits/stdc++.h>
using namespace std;
#define int long long

string helper(int n){
    if(n%3==0) return "vova";
return "vanya";
}

signed main(){
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        string result=helper(n);
        if(result=="vanya") cout<<"First"<<endl;
        else cout<<"Second"<<endl;
    }

    return 0;
}
