#include<bits/stdc++.h>
using namespace std;
 
int t, n, a[50005], res;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    cin >> t;
    while(t--) {
        res = 1000000001;
        cin >> n;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for(int i = 0; i < n - 1; i++) {
            res = min(max(a[i], a[i + 1]), res);
        }
        --res;
        cout << res << '\n';
    }
    return 0;
}