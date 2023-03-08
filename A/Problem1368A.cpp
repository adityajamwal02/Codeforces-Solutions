#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int counter=0;
    long long a,b,n;
    while(t--){
        cin>>a>>b>>n;
        counter=0;
        while(a<=n and b<=n){
            int c=a+b;
            if(a<b) a=c;
            else b=c;
            counter++;
        }
        cout<<counter<<endl;
    }
    return 0;
}
