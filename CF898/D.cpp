#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k, result=0;
        cin>>n>>k;
        string str;
        cin>>str;
        for(int i=0;i<n;i++){
            if(str[i]=='B'){
                result+=1;
                i+=(k-1);
            }
        }
    cout<<result<<endl;
    }

    return 0;
}
