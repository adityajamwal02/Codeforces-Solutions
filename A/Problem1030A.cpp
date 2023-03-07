#include<bits/stdc++.h>
using namespace std;

int  main(){

    int n;
    cin>>n;
    bool flag=0;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1){
            flag=1;
        }
    }
    if(flag==1){
        cout<<"HARD";
    }else{
        cout<<"EASY";
    }

    return 0;
}
