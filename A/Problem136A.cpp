#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int term;
    int given[101];
    int recieved[101];
    for(int i=1;i<=n;i++){
        cin>>term;
        given[i]=term;
        recieved[term]=i;
    }
    for(int i=1;i<=n;i++){
        cout<<recieved[i]<<" ";
    }
    return 0;
}
