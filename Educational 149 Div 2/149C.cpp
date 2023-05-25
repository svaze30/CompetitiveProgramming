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
    string str;
    cin >> str;
    int n = str.length();
    int cnt = 0;
    int cnt0 = 0, cnt1 = 0, cntq = 0;
    if (str[0] == '?') {
            str[0] = '0';
    }
    if (str[n-1] == '?') {
            str[n-1] = '1';
    }
    for (size_t i = 1; i < n-1; i++)
    {
        if (str[i] == '?') {
            if (str[i+1] == '0') {
                str[i] = '0';
            } else
            if (str[i-1] == '1') {
                str[i] = '1';
            }
            else {
                str[i] = '0';
            }
        }
    }
    
    cout << str << endl;
}