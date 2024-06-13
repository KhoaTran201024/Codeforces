#include<bits/stdc++.h>
using namespace std;
 
int t, l, r, res;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    cin >> t;
    while(t--) {
        res = 0;
        cin >> l >> r;
        while (r > 1) {
            if (r % 2 != 0) {
                --r;
            }
            r /= 2;
            ++res;
        } 
        cout << res << '\n';
    }
    return 0;
}