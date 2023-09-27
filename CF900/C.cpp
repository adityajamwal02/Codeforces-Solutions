/// Question C

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--){
        long long n, k, x;
        cin>>n>>k>>x;
        long long result1=(2*n+1-k)*k/2;
        long long result2=(k*(k+1))/2;
        if(x>result1 or x<result2){
            cout<<"NO";
        }else{
            cout<<"YES";
        }
    cout<<endl;
    }

    return 0;
}
