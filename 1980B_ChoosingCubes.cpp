#include <bits/stdc++.h>
using namespace std;

int t, n, f, k, a[105], temp;
string res;

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
        for (int i = 1; i <= 100; ++i) {
            a[i] = 0;
        }
        cin >> n >> f >> k;
        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
        }
        temp = a[f];
        sort(a + 1, a + 1 + n, greater<int>());
        if (temp < a[k]) {
            res = "NO";
        }
        else if (temp == a[k] && a[k + 1] == temp) {
            res = "MAYBE";
        }
        else {
            res = "YES";
        }
        cout << res << "\n";
    }
    return 0;
}