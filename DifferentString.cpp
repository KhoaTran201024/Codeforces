#include<bits/stdc++.h>
using namespace std;

int t, f;
string s;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    cin >> t;
    while(t--) {
        f = 0;
        cin >> s;
        for(int i = 0; i < s.size() - 1; i++) {
            if(s[i] != s[i + 1]) {
                swap(s[i], s[i + 1]);
                cout << "YES" << '\n' << s << '\n';
                f = 1;
                break;
            }
        }
        if(!f) {
            cout << "NO" << '\n';
        }
    }
    return 0;
}