#include<bits/stdc++.h>
using namespace std;


bool isEqual(vector<int> &arr, int n){
    int counter=0;
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]) counter++;
    }
    return (counter==n);
}

int main(){

    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(isEqual(arr,n)){
        cout<<0;
    }
    int max_num = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max_num){
            max_num=arr[i];
        }
    }
    int answer=0;
    for(int i=0;i<n;i++){
        answer+=abs(max_num-arr[i]);
    }
    cout<<answer;
    return 0;
}
