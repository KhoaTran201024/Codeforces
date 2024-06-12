#include<bits/stdc++.h>
using namespace std;
 
int t, f;
string a;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    cin >> t;
    while(t--) {
        f = 0;
        cin >> a;
        if (a[0] == '1' && a[a.length() - 1] != '9') {
            for (int i = 1; i < a.length() - 1; i++) {
                if (a[i] == '0') {
                    f = 1;
                }
            }
            if (f == 1) {
                cout << "NO" << '\n';
                continue;
            }
            cout << "YES" << '\n';
        } 
        else {
            cout << "NO" << '\n';
        } 
    }
    return 0;
}