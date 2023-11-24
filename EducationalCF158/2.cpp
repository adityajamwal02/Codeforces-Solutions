#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int tests;
    cin>>tests;
    while(tests--){
        int n, result=0, mini=0;
        cin>>n;
        vector<int> nums(n+1,0);
        set<int> st;
        for(int i=1;i<=n;i++) cin>>nums[i];
        for(int i=1;i<=n;i++){
            if(nums[i]<=mini) mini=nums[i];
            else{
                result=result+nums[i]-mini;
                mini=nums[i];
            }
        }
    result--;
    cout<<result<<endl;
    }

return 0;
}
