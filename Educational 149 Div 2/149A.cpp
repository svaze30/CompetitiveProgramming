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
    int x, k;
    cin >> x >> k;
    
    if (x % k != 0) {
        cout << 1 << endl;
        cout << x << endl;
        return;
    }
    cout << 2 << endl;
    cout << -1 << " " << x + 1 << endl;
}