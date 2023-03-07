#include<bits/stdc++.h>
using namespace std;


int main(){
    int n, m;
    cin>>n>>m;
    int direction=1;
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<m;j++){
                cout<<"#";
            }
        }else if(i%2!=0 and direction==1){
            direction=0;
            for(int j=0;j<m;j++){
                if(j==m-1){
                    cout<<"#";
                }else{
                    cout<<".";
                }
            }
        }else if(i%2!=0 and direction==0){
            direction=1;
            for(int j=0;j<m;j++){
                if(j==0){
                    cout<<"#";
                }else{
                    cout<<".";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
