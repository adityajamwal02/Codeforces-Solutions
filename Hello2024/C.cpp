#include<bits/stdc++.h>
using namespace std;
#define int long long

/// Solution by Aditya Jamwal

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,low=1e9,high=1e9,counter=0;
        cin>>n;
        vector<int> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
            if(nums[i]<=low) low=nums[i];
            else if(nums[i]<=high) high=nums[i];
            else{
                low=nums[i];
                counter++;
            }
        if(low>high) swap(low,high);
        }
    cout<<counter<<endl;
    }
    return 0;
}

