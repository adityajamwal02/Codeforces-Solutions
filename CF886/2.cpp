#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<pair<int,int>,int>> nums(n);
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            nums.push_back({{b,a},i+1});
        }
        sort(nums.rbegin(),nums.rend());
        for(int i=0;i<n;i++){
            if(nums[i].first.second<=10){
                cout<<nums[i].second<<endl;
                break;
            }
        }
    }

    return 0;
}
