#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int tests;
    cin>>tests;
    while(tests--){
        int n, maxi=0, flag=1, index=0;
        cin>>n;
        vector<int> nums(n,0), result;
        for(int i=0;i<n;i++) cin>>nums[i];
        maxi=*max_element(nums.begin(),nums.end());
        while(maxi){
            flag=1;
            for(int i=1;i<n;i++) if(nums[i-1]!=nums[i]) flag=0;
            if(flag) break;
            index=maxi%2==0;
            for(int i=0;i<n;i++) nums[i]=(nums[i]+index)/2;
            maxi=(maxi+index)/2;
        result.push_back(index);
        }
    int sz=result.size();
    cout<<sz<<endl;
    if(result.size()<=n) for(int i=0;i<sz;i++) cout<<result[i]<<" ";
    cout<<endl;
    }

return 0;
}
