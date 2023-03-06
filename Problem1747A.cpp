#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        long long answer=0;
        for(int i=0;i<n;i++){
            answer+=arr[i];
        }
        if(answer<0){
            cout<<-answer<<endl;
        }else{
            cout<<answer<<endl;
        }
    }
    return 0;
}
