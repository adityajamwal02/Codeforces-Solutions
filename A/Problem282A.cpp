#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int X=0;
    string temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        if(temp=="++X" or temp=="X++") X++;
        else X--;
    }
    cout<<X;

    return 0;
}
