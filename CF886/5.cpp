#include <bits/stdc++.h>
using namespace std;
#define int long long int

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        int m = 0;
        int c;
        int l, r;
        cin >> n >> c;
        l = 0;
        int sum = 0;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> r;
            a[i] = r;
            l += r * r;
            sum += r;
        }

        c -= l;
        c = c / 4;
        c = c / n;
        sum /= 2 * n;
        int temp = sqrtl(sum * sum + c);
        temp -= sum;
        cout << temp << endl;
    }
    return 0;
}
