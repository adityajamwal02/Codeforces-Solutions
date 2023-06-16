#include <bits/stdc++.h>
using namespace std;

void solve(){
    int k;
    cin>>k;
    priority_queue <int, vector<int>, greater<int>> pq;
    for(int i=1;i<=1000000;i++){
        if(i%3==0 or i%10==3) continue;
        else pq.push(i);
    }
    k=k-1;
    while(k--){
       pq.pop();
    }
    cout<<pq.top()<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
