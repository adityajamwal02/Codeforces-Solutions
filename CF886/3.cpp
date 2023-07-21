#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        char mat[8][8];
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                cin>>mat[i][j];
            }
        }
        string result="";
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(mat[i][j]>='a' and mat[i][j]<='z'){
                    result+=mat[i][j];
                }
            }
        }
        cout<<result<<endl;
    }

    return 0;
}
