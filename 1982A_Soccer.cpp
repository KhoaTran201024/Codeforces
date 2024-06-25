#include <bits/stdc++.h>
using namespace std;

int t, x_1, y_1, x_2, y_2;

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
        cin >> x_1 >> y_1 >> x_2 >> y_2;
        long long a = y_1 - x_1;
        long long b = y_2 - x_2;
        if (a * b > 0) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}