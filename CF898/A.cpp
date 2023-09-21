#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        string s="abc";
        if(str==s) cout<<"YES"<<endl;
        else{
            int counter=0;
            if(str[0]!='a') counter++;
            if(str[1]!='b') counter++;
            if(str[2]!='c') counter++;
            if(counter==2) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }

    return 0;
}
