#include<bits/stdc++.h>
using namespace std;

int t;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        n = n - n % 10 + (n % 10 + 1) % 10;
        cout << n << '\n';
    }
    return 0;
}