#include<bits/stdc++.h>
using namespace std;

int main(){
    string input;
    cin>>input;
    vector<int> collection;
    for(int i=0;i<input.size();i++){
        if(input[i]=='1' or input[i]=='2' or input[i]=='3'){
            collection.push_back(int(input[i]-'0'));
        }
    }
    string temp="";
    sort(collection.begin(), collection.end());
    for(int i=0;i<collection.size();i++){
        temp+=to_string(collection[i]);
        temp=temp + "+";
    }
    temp = temp.substr(0,temp.size()-1);
    cout<<temp;

    return 0;
}
