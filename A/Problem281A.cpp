#include<bits/stdc++.h>
using namespace std;

int main(){

    string name;
    cin>>name;
    if(name[0]>='a' and name[0]<='z'){
        name[0]=toupper(name[0]);
    }
    cout<<name;

    return 0;
}
