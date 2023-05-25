#include <iostream>

void solve();

using namespace std;

int main () {
    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}

void solve() {
    int n;
    cin >> n;
    int sum = n * (n + 1) / 2;
    int r = 0, l = 0;
    for (int i = 1 ; i < n ; i++) {
        for (int j = i + 1 ; j <= n ; j ++) {
            if (sum % (j - i + 1) == 0 ) {
                r = j;
                l = i;
                break;
            }
        }
        if (r == 0 && l == 0 && i == n -1 ) {
            cout << -1;
            return;
        }
        
    }
    if (l != 0)
        cout << l << " ";
    for (int i = 1 ; i <= n ; i++) {
        if (i == l || i == r) continue;
        cout << i << " ";
    }
    if (r != 0)
        cout << r << endl;
}