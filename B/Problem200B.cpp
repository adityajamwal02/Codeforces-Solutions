#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin>>n;
   vector<int> arr(n);
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   double sum=0;
   for(auto i : arr){
        sum+=i;
   }
   sum=sum/n;
   cout<<(double)sum;

    return 0;
}
