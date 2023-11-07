#include<bits/stdc++.h>
using namespace std;

string checker(bool res){
    if(res) return "Yes";
return "No";
}

void helper(){
    int num1,num2,occ,counter=0;
    cin>>num1>>num2;
    occ=num1;
    vector<int> nums1(num1);
    for (int i=0;i<num1;i++) cin>>nums1[i];
    vector<int> arr1(num1+1,0);
    for (int i=1;i<=num1;i++) arr1[i]=nums1[i-1];
    vector<bool>flag(num1+1,false);
    bool ans=true;
    while(counter<num2 and !flag[occ]){
        if (arr1[occ]>num1) ans=false;
        counter++;
        flag[occ]=true;
        occ-=arr1[occ];
        occ--;
        occ=(occ%num1+num1)%num1+1;
    }
    cout<<checker(ans)<<endl;
}

int main(){
    int tests;
    cin>>tests;
    while(tests--){
        helper();
    }

return 0;
}
