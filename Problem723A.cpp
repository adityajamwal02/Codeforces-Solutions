#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    vector<int> nums;
    nums.push_back(a);
    nums.push_back(b);
    nums.push_back(c);
    sort(nums.begin(), nums.end());
    int total_distance = 0;
    total_distance = abs(nums[1]-nums[2]) + abs(nums[1]-nums[0]);
    cout<<total_distance;
return 0;
}
