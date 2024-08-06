#include <bits/stdc++.h>
using namespace std;

int t, n, ans;

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
        cin >> n;
        while (n > 0) {
            ans += n % 10;
            n /= 10;
        }
        cout << ans << "\n";
    }
    return 0;
}