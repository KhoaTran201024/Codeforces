#include <bits/stdc++.h>
using namespace std;

int t, a, b, c, d, ans;

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
        ans = 0;
        cin >> a >> b >> c >> d;
        if ((a > c && b >= d) || (a >= c && b > d)){
            ans += 2;
        }
        if ((a > d && b >= c) || (a >= d && b > c)) {
            ans += 2;
        }
        cout << ans << "\n";
    }
    return 0;
}