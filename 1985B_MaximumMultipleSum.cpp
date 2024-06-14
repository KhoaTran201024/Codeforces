#include <bits/stdc++.h>
using namespace std;

int t, n;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    if (fopen("sol.inp", "r")) {
        freopen("sol.inp", "r", stdin);
        freopen("sol.out", "w", stdout);
    }
    cin >> t;
    while(t--) {
        cin >> n;
        if(n == 3) {
            cout << 3 << '\n';
            continue;
        }
        cout << 2 << '\n';
    }
    return 0;
}