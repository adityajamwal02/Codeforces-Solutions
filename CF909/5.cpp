#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> nums(n);
        for(int i=0;i<n;i++) cin>>nums[i];
        int result=0;
        for(int i=0;i<n;i++) if(nums[i]<nums[result]) result=i;
        int ans=result;
        for(int i=result;i<n-1;i++) if(nums[i]>nums[i+1]) ans=-1;
        cout<<ans<<endl;
    }
    return 0;
}
