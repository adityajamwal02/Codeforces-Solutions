#include <algorithm>
#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
using namespace std;
#define mod (int) 998244353
#define MOD (int) 1e9+7
// Big two primes
#define X 1001100011100001111ll
#define all(a) a.begin(),a.end()
#define for0(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
#define loop(i,a,b) for (int i = a; i < b; i++)
#define bloop(i,a,b) for (int i = a ; i>=b;i--)
#define tc(t) int t; cin >> t; while (t--)
#define int long long
#define ll long long
#define pb emplace_back
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define in(x) scanf("%d", &x)
#define rr return 0
#define prec(n) fixed<<setprecision(n)
#define maxpq priority_queue<int>
#define minpq priority_queue<int, vector<int>, greater<int> >
#define inf (int)(1e18)
#define ini(a, i) memset(a, i, sizeof(a))
#define vi vector<int>
#define fi first
#define se second
#define kitna se
#define endl "\n"
#define pii pair<int, int>
#define vii vector<pi>
const int MAXN = (int)((1e5) + 100);
int gcd(int a, int b) { if (a == 0) return b; return gcd(b % a, a);}
int max(int a, int b) {if (a > b) return a; else return b;}
int min(int a, int b) {if (a < b) return a; else return b;}
void pr(int x) {cout << x;}
void prl(int x) {cout << x << endl;}
// typedef tree<pii, null_type, less<pii>, rb_tree_tag, tree_order_statistics_node_update> Set;
//bool isPrime(int N){ for(int i=2;i*i<=N;++i){if(N%i==0) return false;}return true;}
int cbrt(int x) { int lo = 1, hi = min(2000000ll, x); while (hi - lo > 1) {int mid = (lo + hi) / 2; if (mid * mid * mid < x) {lo = mid;} else hi = mid;} if (hi * hi * hi <= x) return hi; else return lo;}
const int dx[4] = { -1, 1, 0, 0};
const int dy[4] = {0, 0, -1, 1};
int XX[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int YY[] = { -1, 0, 1, -1, 1, -1, 0, 1 };
const int N =  (int)(5 * 1e5 + 10);
 
int pre[N];
signed main() {
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
 
    fio;
//srand(time(NULL));
    int T = 1;
    cin >> T;
 
 
    while (T--) {
        int n, k;
        cin >> n >> k;
        int a[n];
        for0(i, n) cin >> a[i];
        for0(i, 2 * k + 10) pre[i] = 0;
 
        vector<pair<int, int>>vec;
        for0(i, n / 2) vec.pb(min(a[i], a[n - i - 1]), max(a[i], a[n - i - 1]));
        map<int, int>mpp;
        for (auto it : vec)
        {
            int l = it.fi + 1;
            int r = it.se + k;
 
            mpp[it.fi + it.se]++;
 
            pre[l] += 1;
            pre[r + 1] -= 1;
        } int sum = 0;
        for0(i, 2 * k + 10)
        {
            sum += pre[i];
            pre[i] = sum;
        }
 
        int mini = n;
 
        for (int i = 2; i <= 2 * k; i++)
        {
            int cnt1 = (pre[i] - mpp[i]);
            int cnt2 = mpp[i];
 
            int cnt3 = (n / 2) - (cnt2) - cnt1;
            //cout << i << " " << cnt1 << " " << cnt2 << " " << cnt3 << endl;
 
            int cnt = cnt1 + (cnt3 * 2);
            //cout << cnt << endl;
            mini = min(cnt, mini);
        }
        prl(mini);
    }
 
 
}
 
 
