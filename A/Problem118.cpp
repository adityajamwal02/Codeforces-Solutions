#include<bits/stdc++.h>
using namespace std;

bool isVowel(char ch){
    if(ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u' or ch=='y'){
        return true;
    }
    return false;
}


int main(){

    string s;
    cin>>s;
    int n=s.size();
    for(int i=0;i<n;i++){
        s[i]=tolower(s[i]);
    }
    string result="";
    for(int i=0;i<n;i++){
        if(isVowel(s[i])){
            continue;
        }else{
            result.push_back('.');
            result.push_back(s[i]);
        }
    }
    cout<<result;

    return 0;
}
