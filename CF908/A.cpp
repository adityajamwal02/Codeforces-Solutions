#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int tests;
    cin>>tests;
    for(int i=0;i<tests;i++){
        int num;
        cin>>num;
        string str;
        cin>>str;
        int n=str.size();
        char result=str[n-1];
        cout<<result<<endl;
    }
    return 0;
}
