#include<bits/stdc++.h>
using namespace std;

int t, n, a[51];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    cin >> t;
    while(t--) {
        cin >> n;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        if(a[0] == a[n - 1]) {
            cout << "NO" << '\n';
            continue;
        }
        cout << "YES" << '\n';
        for(int i = 0; i < n; i++) {
            if (i == 1) {
                cout << "B";
            }
            else {
                cout << "R";
            }
        }
        cout << '\n';
    }
    return 0;
}