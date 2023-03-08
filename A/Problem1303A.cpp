#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        vector<int> index;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                index.push_back(i);
            }
        }
        int counter=0;
        for(int i=1;i<index.size();i++){
            if((index[i]-index[i-1])>1){
                counter+=index[i]-index[i-1]-1;
            }
        }
        cout<<counter<<endl;
    }

    return 0;
}

