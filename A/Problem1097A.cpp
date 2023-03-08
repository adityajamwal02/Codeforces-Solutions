#include<bits/stdc++.h>
using namespace std;

int main(){

    string input;
    cin>>input;
    vector<string> table(5);
    for(int i=0;i<5;i++){
        cin>>table[i];
    }
    for(auto i : table){
        if(i[0]==input[0] or i[1]==input[1]){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";

    return 0;
}

