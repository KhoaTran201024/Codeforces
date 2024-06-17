#include <bits/stdc++.h>
using namespace std;

int t, n, a[105], res;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    if (fopen("input.txt", "r")) {
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    }
    cin >> t;
    while(t--) {
        res = -1;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if ( i == n - 1) {
                res += a[n - 1];
                break;
            }
            res = max(res, a[i]);
        }
        cout << res << "\n";
    }
    return 0;
}