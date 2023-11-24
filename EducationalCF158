#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k, result=0;
        bool check=false;
        cin>>n>>k;
        vector<int> nums(n+1,0);
        for(int i=1;i<=n;i++) cin>>nums[i];
        for(int i=0;i<n;i++){
            result=max(result,nums[i+1]-nums[i]);
            check=true;
        }
        if(check) result=max(result,2*(k-nums[n]));

    cout<<result<<endl;
    }

    return 0;
}
