#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> nums(n), prefix(n,0);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        prefix[0]=nums[0];
        int result=0, i=1;
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+nums[i];
        }
        while(i<n){
            if(n%i!=0){
                i++;
                continue;
            }
            vector<int> temp;
            for(int j=0;j<n;j+=i){
                int val=prefix[min(j+i-1,n-1)];
                if(j-1>= 0){
                    val-=prefix[j-1];
                }
            temp.push_back(val);
            }
            int val=abs(*max_element(temp.begin(),temp.end())-*min_element(temp.begin(),temp.end()));
            if(result<val) result=val;
        i++;
        }
    cout<<result<<endl;
    }

    return 0;
}
