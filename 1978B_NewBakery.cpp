#include <bits/stdc++.h>
using namespace std;

long long t, n, a, b, i, res;

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
        cin >> n >> a >> b;
        i = min (b - a, n);
        if ( i > 0 ) {
            long long x = b - i + 1, y = b;
            res += (x + y) * (y - x + 1) / 2;
            n -= i;
        } 
        res += n * a;
        cout << res << "\n";
    }
    return 0;
}