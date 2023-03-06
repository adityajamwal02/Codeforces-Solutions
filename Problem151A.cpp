#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int total_drink_one_slot=(k*l)/nl;
    int total_lime_one_slot=(c*d);
    int total_salt_one_slot=p/np;
    int counter = min(total_drink_one_slot,min(total_lime_one_slot,total_salt_one_slot))/n;
    cout<<counter;

    return 0;
}
