#include <bits/stdc++.h>
using namespace std;

int t, n, s, m, l, r, ans;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    if (fopen("input.txt", "r")) {
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    }
    cin >> t;
    while (t--) {
        ans = -1, l = r = 0;
        cin >> n >> s >> m;
        for (int i = 0; i < n; ++i) {
            cin >> l;
            ans = max(ans, l - r);
            cin >> r;
        }
        ans = max(ans, m - r);
        if (ans >= s) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
        // cout << ans << "\n";
    }
    return 0;
}