#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int tests;
    cin>>tests;
    while(tests--){
        int n,m,counter=0;
        cin>>n>>m;
        vector<int> arr1(n),arr2(m);
        for (int i=0;i<n;i++) cin>>arr1[i];
        for (int i=0;i<m;i++) cin>>arr2[i];
        sort(arr2.rbegin(),arr2.rend());
        for (int i=0;i<n;i++){
            while(counter<m and arr2[counter]>=arr1[i]){
                cout<<arr2[counter]<<' ';
                counter++;
            }
        cout<<arr1[i]<<' ';
        }
        for(int j=counter;j<m;j++) cout<<arr2[j]<<' ';
        cout<<endl;
    }
    return 0;
}
