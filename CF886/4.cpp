#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n,k,i=0,diff,result=0;
    cin>>n>>k;
    vector<long long> arr(n);
    for(long long i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    while(i<n){
        long long nextIndex=i+1;
        while(nextIndex<n){
            if(arr[nextIndex]-arr[nextIndex-1]>k) break;
        nextIndex++;
        }
        diff=nextIndex-i;
        result=max(result,diff);
    i=nextIndex;
    }
    long long ok=n-result;
    cout<<ok<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
