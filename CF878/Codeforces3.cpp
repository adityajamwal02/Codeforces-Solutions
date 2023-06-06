#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n, k, q;
    cin>>n>>k>>q;
    vector<long long> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long result=0, c=0;
    for(auto it : arr){
        if(it<=q){
            c++;
        }else{
            c=0;
        }
        if(c>=k){
            result+=(c-k+1);
        }
    }
    cout<<result<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
