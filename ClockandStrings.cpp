#include<bits/stdc++.h>
using namespace std;

int t, a[4];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    cin >> t;
    while(t--) {
        cin >> a[0] >> a[1] >> a[2] >> a[3];
        sort(a, a + 2);
        sort(a + 2, a + 4);
        if(a[0] > a[2] && a[0] < a[3] && a[1] > a[3]) {
            cout << "YES\n";
            continue;
        }
        if(a[0] < a[2] && a[1] > a[2] && a[1] < a[3]) {
            cout << "YES\n";
            continue;
        }
        cout << "NO\n";
    }
    return 0;
}