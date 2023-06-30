/*
You are given a string s of length n consisting of lowercase Latin letters. You may apply some operations to this string: in one operation you can delete some contiguous substring of this string,
if all letters in the substring you delete are equal. For example, after deleting substring bbbb from string abbbbaccdd we get the string aaccdd.
Calculate the minimum number of operations to delete the whole string s

Input
The first line contains one integer n
(1≤n≤500) — the length of string s

The second line contains the string s (|s|=n) consisting of lowercase Latin letters.

Output
Output a single integer — the minimal number of operation to delete string s
*/

#include<bits/stdc++.h>
using namespace std;

int findMinDel(int i, int j, string s, int n, int dp[][n]){
    if(i>j) return 0;
    if(i==j) return 1;
    if(dp[i][j]!=-1) return dp[i][j];

    int result=1+findMinDel(i+1,j,s,n,dp);
    for(int x=i+1;x<=j;x++){
        if(s[i]==s[j]){
            result=min(result,findMinDel(i+1,x-1,s,n,dp)+findMinDel(x,j,s,n,dp));
        }
    }
    return dp[i][j]=result;
}

int main(){

    int n;
    cin>>n;
    string s;
    cin>>s;
    int dp[n][n];
    memset(dp,-1,sizeof(dp));
    cout<<findMinDel(0,n-1,s,n,dp);

    return 0;
}
