/// Question B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        arr[0]=5;
        arr[1]=6;
        for(int i=2;i<n;i++) {
            arr[i]=arr[i-1]+1;
            while(3*arr[i]%(arr[i-1]+arr[i-2])==0){
                arr[i]++;
            }
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout << endl;
    }

    return 0;
}
