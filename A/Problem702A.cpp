#include<bits/stdc++.h>
using namespace std;

int maxLengthSubarray(vector<int> &arr, int n){
    int i=0, j=1;
    int maxLen=1;
    while(j<n){
        if(arr[j]>arr[j-1]){
            maxLen=max(maxLen,j-i+1);
            j++;
        }else{
            i=j;
            j++;
        }
    }
    return maxLen;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int answer = maxLengthSubarray(arr,n);
    cout<<answer;

    return 0;
}
