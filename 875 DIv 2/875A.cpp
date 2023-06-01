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
    int arr[n];
    for (size_t i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0 ; i< n ; i++) {
        cout << n - arr[i] + 1 << " " ;
    }
    cout << endl;

}