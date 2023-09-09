#include <iostream>
#include <algorithm>

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
    int n , k;
    cin >> n >> k;

    int c[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> c[i];
    }

    sort(c, c + n);
    int x = 1;
    int maxX = 0;
    for (size_t i = 0; i < n - 1; i++)
    {
        if (c[i] == c[i + 1]) {
            x++;
        } else {x = 1;} 
        maxX = max(maxX, x);
    }
    
    
    int ans = n / (maxX + 1);
    if (maxX == n - 1 || maxX == n) {
        ans = 0;
    } else if ( n % 2 == 0 ) {
        ans = n / (maxX + 2);
    }
    

    cout << ans << endl;
    
}