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
    char txt[100];
    
    scanf("%s", txt);
    
    int ans = 0;
    int i = 0;
    while (txt[i] == '^' || txt[i] == '_')
    {
        if (txt[i] == '_' && txt[i+1] == '_') {
            ans++;
        }
        i++;
    }
    
    cout << ans << endl;
    
}
