#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    unordered_map<string, int> mp;
    vector<string> vec;
    for(int i=0;i<n;i++){
        string shape;
        cin>>shape;
        if(shape=="Tetrahedron"){
            mp[shape]=4;
        }else if(shape=="Cube"){
            mp[shape]=6;
        }else if(shape=="Octahedron"){
            mp[shape]=8;
        }else if(shape=="Dodecahedron"){
            mp[shape]=12;
        }else{
            mp[shape]=20;
        }
        vec.push_back(shape);
    }
    int total=0;
    for(auto i : vec){
        if(mp.find(i)!=mp.end()){
            total+=mp[i];
        }
    }
    cout<<total;
    return 0;
}
