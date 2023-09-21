#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        char mat[10][10];
        int vis[10][10];
        for(int i=0;i<=9;i++){
            for(int j=0;j<=9;j++){
                cin>>mat[i][j];
            }
        }
        for(int i=0;i<=9;i++){
            for(int j=0;j<=9;j++){
                vis[i][j]=0;
            }
        }
        int counter=0;

        for(int i=0;i<=9;i++){
            if((mat[i][0]=='X' and vis[i][0]==0)){
                counter+=1;
                vis[i][0]=1;
            }
            if((mat[0][i]=='X' and vis[0][i]==0)){
                counter+=1;
                vis[0][i]=1;
            }
            if((mat[9][i]=='X' and vis[9][i]==0)){
                counter+=1;
                vis[9][i]=1;
            }
            if((mat[i][9]=='X' and vis[i][9]==0)){
                counter+=1;
                vis[i][9]=1;
            }
        }

        for(int i=0;i<=7;i++){
            if((mat[i+1][1]=='X' and vis[i+1][1]==0)){
                counter+=2;
                vis[i+1][1]=1;
            }
            if((mat[1][i+1]=='X' and vis[1][i+1]==0)){
                counter+=2;
                vis[1][i+1]=1;
            }
            if((mat[8][i+1]=='X' and vis[8][i+1]==0)){
                counter+=2;
                vis[8][i+1]=1;
            }
            if((mat[i+1][8]=='X' and vis[i+1][8]==0)){
                counter+=2;
                vis[i+1][8]=1;
            }
        }

        for(int i=0;i<=5;i++){
            if((mat[i+2][2]=='X' and vis[i+2][2]==0)){
                counter+=3;
                vis[i+2][2]=1;
            }
            if((mat[2][i+2]=='X' and vis[2][i+2]==0)){
                counter+=3;
                vis[1][i+2]=1;
            }
            if((mat[7][i+2]=='X' and vis[7][i+2]==0)){
                counter+=3;
                vis[7][i+2]=1;
            }
            if((mat[i+2][7]=='X' and vis[i+2][7]==0)){
                counter+=3;
                vis[i+2][7]=1;
            }
        }

        for(int i=0;i<=3;i++){
            if((mat[i+3][3]=='X' and vis[i+3][3]==0)){
                counter+=4;
                vis[i+3][3]=1;
            }
            if((mat[3][i+3]=='X' and vis[3][i+3]==0)){
                counter+=4;
                vis[3][i+3]=1;
            }
            if((mat[6][i+3]=='X' and vis[6][i+3]==0)){
                counter+=4;
                vis[6][i+3]=1;
            }
            if((mat[i+3][6]=='X' and vis[i+3][6]==0)){
                counter+=4;
                vis[i+3][6]=1;
            }
        }

        for(int i=0;i<=1;i++){
            if((mat[i+4][4]=='X' and vis[i+4][4]==0)){
                counter+=5;
                vis[i+4][4]=1;
            }
            if((mat[4][i+4]=='X' and vis[4][i+4]==0)){
                counter+=5;
                vis[4][i+4]=1;
            }
            if((mat[5][i+4]=='X' and vis[5][i+4]==0)){
                counter+=5;
                vis[5][i+4]=1;
            }
            if((mat[i+4][5]=='X' and vis[i+4][5]==0)){
                counter+=5;
                vis[i+4][5]=1;
            }
        }

        cout<<counter<<endl;
    }

    return 0;
}
