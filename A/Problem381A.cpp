#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long sereja=0, dima=0;
    int flag=1;
    while(arr.size()>0){
        if(flag==1){
            int temp1=max(arr[0], arr[arr.size()-1]);
            sereja+=temp1;
            if(temp1==arr[arr.size()-1]){
                arr.pop_back();
            }else{
                arr.erase(arr.begin());
            }
            flag=0;
        }else{
            int temp2=max(arr[0], arr[arr.size()-1]);
            dima+=temp2;
            if(temp2==arr[arr.size()-1]){
                arr.pop_back();
            }else{
                arr.erase(arr.begin());
            }
            flag=1;
        }
    }
    cout<<sereja<<" "<<dima;

    return 0;
}
