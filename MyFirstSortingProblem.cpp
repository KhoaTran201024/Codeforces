#include<bits/stdc++.h>
using namespace std;

int t, a[2];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    cin >> t;
    while(t--) {
        cin >> a[0] >> a[1];
        sort(a, a + 2);
        cout << a[0] << ' ' << a[1] << '\n';
    }
    return 0;
}