#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int result=0,counter=0;
    int a,b;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        counter-=a;
        counter+=b;
        result=max(result,counter);
    }
    cout<<result;
    return 0;
}
