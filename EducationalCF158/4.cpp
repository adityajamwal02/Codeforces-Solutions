#include<bits/stdc++.h>
using namespace std;
#define int long long


signed main(){
    int mons, maxi=0, mini=1e12;
    cin>>mons;
    vector<int> nums1(mons+1,0), nums2(mons+1,0), nums3(mons+1,0), nums4(mons+2,0);
    for(int i=1;i<=mons;i++){
        cin>>nums1[i];
        nums2[i]=nums1[i]+(mons-i);
        nums3[i]=nums1[i]+(i-1);
    }
    for(int i=mons;i>=1;i--) nums4[i]=max(nums3[i],nums4[i+1]);
    for(int i=1;i<=mons;i++){
        mini=min(mini,max({maxi,nums4[i+1],nums1[i]}));
        maxi=max(maxi,nums2[i]);
    }
    cout<<mini<<endl;

    return 0;
}
