#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long result=1, zero=0;
        vector<long long> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==0) zero++;
        }
        if(zero>1) cout<<0<<endl;
        else if(zero==1){
            for(int i=0;i<n;i++){
                if(arr[i]!=0) result*=arr[i];
            }
        cout<<result<<endl;
        }else{
            for(int i=0;i<n;i++){
                result*=arr[i];
            }
            long long temp=result, maxVal=-1e9;
            for(auto it : arr){
                result=result/it;
                maxVal=max(maxVal,result*(it+1));
                result=temp;
            }
        cout<<maxVal<<endl;
        }
    }

    return 0;
}
