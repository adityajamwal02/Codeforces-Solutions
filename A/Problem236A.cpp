#include<bits/stdc++.h>
using namespace std;

int main(){

    string name;
    cin>>name;
    unordered_map<char, int> mp;
    for(int i=0;i<name.size();i++){
        mp[name[i]]++;
    }
    if(mp.size()%2==0){
        cout<<"CHAT WITH HER!";
    }else{
        cout<<"IGNORE HIM!";
    }

    return 0;
}
