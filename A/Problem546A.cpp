#include<bits/stdc++.h>
using namespace std;

int main(){
    long long k,n,w;
    cin>>k>>n>>w;
    long long totalCost = k*w*(w+1)/2;
    if(n>totalCost){
        cout<<0;
    }else{
        cout<<abs(n-totalCost);

    }
    return 0;
}
