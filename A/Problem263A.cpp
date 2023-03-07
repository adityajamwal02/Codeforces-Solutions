#include<bits/stdc++.h>
using namespace std;

int main(){
    int row,col;
    int arr[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
            if(arr[i][j]==1){
                row=i;
                col=j;
            }
        }
    }
    int total_distance = abs(2-row)+abs(2-col);
    cout<<total_distance;

    return 0;
}
