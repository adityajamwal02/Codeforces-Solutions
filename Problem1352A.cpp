#include<bits/stdc++.h>
using namespace std;


int  main(){

    int t;
    cin>>t;
    while(t--){
        vector<int> result;
        string s;
        cin>>s;
        int len=s.size();
        for(int i=0;i<len;i++){
            if(s[i]!='0'){
                int remain_count=len-i-1;
                int num = (s[i]-'0')*pow(10,remain_count);
                result.push_back(num);
            }
        }
        cout<<result.size()<<endl;
        for(int i=0;i<result.size();i++){
            cout<<result[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
