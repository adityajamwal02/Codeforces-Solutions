#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,k;
    cin>>n>>k;
    while(k--){
        if(n%10!=0){
            n=n-1;
        }else{
            n=n/10;
        }
    }
    cout<<n;

    return 0;
}
