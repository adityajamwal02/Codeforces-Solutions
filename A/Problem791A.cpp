#include<bits/stdc++.h>
using namespace std;

int main(){

    int a,b;
    cin>>a>>b;
    int counter=0;
    while(a<=b){
        counter++;
        a=3*a;
        b=2*b;
    }
    cout<<counter;

    return 0;
}
