#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int li=0,ri=0, left_height=INT_MIN, right_height=INT_MAX;
    int height;
    for(int i=0;i<n;i++){
        cin>>height;
        if(height>left_height){
            left_height=height;
            li=i;
        }
        if(height<=right_height){
            right_height=height;
            ri=i;
        }
    }
    int answer = li+n-1-ri;
    if(li<ri){
        cout<<answer;
    }else{
        cout<<answer-2;
    }

    return 0;
}
