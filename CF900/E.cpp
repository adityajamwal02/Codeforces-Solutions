/// Codeforces 5 :

#include<bits/stdc++.h>
using namespace std;

vector<int> segmentTree;

void constructTree(int low, int high, int i, vector<int> &nums){
    if(low==high){
        segmentTree[i]=nums[low];
        return;
    }
    int mid=low+(high-low)/2;
    constructTree(low,mid,2*i+1,nums);
    constructTree(mid+1,high,2*i+2,nums);
    segmentTree[i]=segmentTree[2*i+1]&segmentTree[2*i+2];
}

int range(int low, int high, int i, int qs, int qe){
    if(qs>high or qe<low) return INT_MAX;
    if(qs<=low and qe>=high) return segmentTree[i];
    int mid=low+(high-low)/2;
    int left=range(low,mid,2*i+1,qs,qe);
    int right=range(mid+1,high,2*i+2,qs,qe);
    return left&right;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n;
        vector<int> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        cin>>q;
        vector<pair<int,int>> queries;
        for(int i=0;i<q;i++){
            int l, k;
            cin>>l>>k;
            queries.push_back({l,k});
        }
        segmentTree.resize(4*n);
        constructTree(0,n-1,0,nums);
        for(pair<int,int> query : queries){
            int leftBound=query.first-1;
            int temp=query.second;
            int low=leftBound, high=n-1, result=-1;
            while(low<=high){
                int mid=low+(high-low)/2;
                int counter=range(0,n-1,0,leftBound,mid);
                if(counter>=temp){
                    low=mid+1;
                    result=mid;
                }else{
                    high=mid-1;
                }
            }
            if(result>=0) result++;
            cout<<result<<" ";
        }
        cout<<endl;
    }
    return 0;
}
