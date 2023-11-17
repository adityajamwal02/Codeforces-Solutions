#include<bits/stdc++.h>
using namespace std;
#define int long long

int helper(vector<int> &nums, int low, int high){
    int index=0, maxi=INT_MIN;
    for(int i=low;i<=high;i++){
        index+=nums[i];
        if(maxi<index) maxi=index;
        if(index<0) index=0;
    }
return maxi;
}

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        int result=INT_MIN, index=0, curr=0;
        for(int i=1;i<n;i++){
            if((abs(nums[i-1])%2)==(abs(nums[i]%2))){
                curr=helper(nums,index,i-1);
                result=max(result,curr);
                index=i;
            }
        }
        curr=helper(nums,index,n-1);
        result=max(result,curr);
        cout<<result<<endl;
    }

    return 0;
}
