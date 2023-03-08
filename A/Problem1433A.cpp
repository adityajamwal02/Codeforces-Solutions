#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int digit=x%10;
        int result=(digit-1)*10;
        int num=digit;
        int i=1;
        while(num<=x){
            result+=(i++);
            num=num*10+digit;
        }
    cout<<result<<endl;
    }

    return 0;
}
