#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    string encrypted;
    cin>>encrypted;
    string result="";
    int i=0, length=1;
    while(i<n){
        // i ->
        result.push_back(encrypted[i]);
        length++;
        i+=length;
    }
    cout<<result;


    return 0;
}
