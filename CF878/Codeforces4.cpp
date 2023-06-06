#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool helper(ll val, vector<ll> &nums){
    ll counter=1, mini=nums[0], maxi=nums[0];
    for(ll i=0;i<nums.size();i++){
        maxi=nums[i];
        if(((maxi-mini+1)/2)>val){
            counter++;
            mini=nums[i];
        }
    }
    if(counter>3)
        return false;
return true;
}

void solve(){
    ll n;
    cin>>n;
    vector<ll> nums(n,0);
    for(ll i=0;i<n;i++){
        cin>>nums[i];
    }
    sort(nums.begin(),nums.end());
    ll low=0, high=1e9, result=1e9;
    while(low<=high){
        ll mid=low+(high-low)/2;
        if(helper(mid,nums)){
            result=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    cout<<result<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
