#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    int counter=0;
    while(n>0){
        if(n%10==4 or n%10==7){
            counter++;
            n=n/10;
        }else{
            n=n/10;
        }
    }
    string temp = to_string(counter);
    int s = temp.size();
    int result=0;
    for(int i=0;i<s;i++){
        if(temp[i]=='4' or temp[i]=='7'){
            result++;
        }
    }
    if(result==s){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}

