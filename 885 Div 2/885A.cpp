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
    int n, m, k;
    cin >> n >> m >> k ;
    int x, y;
    cin >> x >> y;
    int cord[2][k] ;
    for (size_t i = 0; i < k; i++)
    {
        cin >> cord[0][i] >> cord[1][i];
    }
    for (size_t i = 0; i < k; i++)
    {
        if ((x - cord[0][i] + y - cord[1][i]) % 2 == 0) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    
    
}