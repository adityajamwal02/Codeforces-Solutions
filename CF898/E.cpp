#include<bits/stdc++.h>
using namespace std;

int helper(vector<long long> &nums, long long x, long long mid){
    long long counter=0;
    for(auto num : nums){
        if(mid<num) continue;
    counter+=(mid-num);
    }
return counter<=x;
}

int solve(long long n, long long x, vector<long long> &nums){
    long long low=1, high=1e13;
    while(low+1<high){
        long long mid=low+(high-low)/2;
        if(helper(nums,x,mid)){
            low=mid;
        }else{
            high=mid-1;
        }
    }
if(helper(nums,x,high)) return high;
return low;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n, x;
        cin>>n>>x;
        vector<long long> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        int result=solve(n,x,nums);
    cout<<result<<endl;
    }

    return 0;
}
