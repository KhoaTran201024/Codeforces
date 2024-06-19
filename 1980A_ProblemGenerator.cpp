#include <bits/stdc++.h>
using namespace std;

int t, n, m, a[300], res;
char s[300];

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
        res = 0;
        for (int i = 'A'; i <= 'G'; ++i) {
            a[i] = 0;
        }
        cin >> n >> m;
        for (int i = 0; i < n; ++i) {
            cin >> s[i];
            ++a[s[i]];
        }
        for (int i = 'A'; i <= 'G'; ++i) {
            a[i] -= m;
            if (a[i] < 0) {
                res -= a[i];
            }
        }
        cout << res << "\n";
    }
    return 0;
}