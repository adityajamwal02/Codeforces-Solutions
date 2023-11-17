#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n, result=0;
        cin>>n;
        map<int,int> mp;
        vector<int> nums(n);
        for(int i=0;i<n;i++) cin>>nums[i];
        for(int i=0;i<n;i++) mp[nums[i]]++;
        result=result+mp[1]*mp[2];
        for(auto it : mp) result=result+(it.second*(it.second-1))/2;
    cout<<result<<endl;
    }
return 0;
}
