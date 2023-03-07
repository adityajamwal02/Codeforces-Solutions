#include<bits/stdc++.h>
using namespace std;

int main(){
    string temp;
    cin>>temp;
    int n=temp.size();
    for(int i=0;i<n;i++){
        char ch=temp[i];
        if(i==0 and ch>='5' and ch<'9'){
            temp[i]='9'-ch+'0';
        }else if(i>0 and ch>='5'){
            temp[i]='9'-ch+'0';
        }
    }
    cout<<temp;
    return 0;
}
