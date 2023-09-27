/// Question A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        int max_count=0, current_count=0;
        for (int i = 0; i < n; i++) {
            if (nums[i]==k) {
                current_count++;
            } else {
                max_count = max(max_count, current_count);
                current_count = 0;
            }
        }
        max_count = max(max_count, current_count);
        if (max_count > 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
