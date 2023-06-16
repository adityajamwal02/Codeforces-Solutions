/*
You are given a multiset (i. e. a set that can contain multiple equal integers) containing 2n
 integers. Determine if you can split it into exactly n
 pairs (i. e. each element should be in exactly one pair) so that the sum of the two elements in each pair is odd (i. e. when divided by 2
, the remainder is 1
).

Input
The input consists of multiple test cases. The first line contains an integer t
 (1≤t≤100
) — the number of test cases. The description of the test cases follows.

The first line of each test case contains an integer n
 (1≤n≤100
).

The second line of each test case contains 2n
 integers a1,a2,…,a2n
 (0≤ai≤100
) — the numbers in the set.

Output
For each test case, print "Yes" if it can be split into exactly n
 pairs so that the sum of the two elements in each pair is odd, and "No" otherwise. You can print each letter in any case.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int even=0, odd=0;
        for(int i=0;i<2*n;i++){
            int x;
            cin>>x;
            if(x%2==0) even++;
            else odd++;
        }
        if(even==odd) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
