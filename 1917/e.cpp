#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
#define loop0(i, n) for (ll i = 0; i < n; i++)
#define loop1(i, n) for (ll i = 1; i <= n; i++)

#define mp make_pair;
#define F first;
#define S second;
#define pb push_back;

void solve();

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t = 1;
  cin >> t;

  while (t--)
    solve();

  return 0;
}

void solve() {
  int n, k;
  cin >> n >> k;

  if (k % n == 0) {
    cout << "Yes" << endl;
    int l = k / n;

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (i < l)
          cout << "1 ";
        else
          cout << "0 ";
      }
      cout << endl;
    }
  } else if (k == 2 || k == n * n - 2) {
    cout << "No" << endl;
  } else if (k % 2 == 0 && k <= n) {

  } else if (k % 4 == 0) {
    for (int i = 2; i < n; i += 2) {
      if (k % i == 0) {
        if (k / i <= n && (k / i) % 2 == 0) {
          cout << "Yes" << endl;
          int x = k / i;
          for (int z = 0; z < n; z++) {
            for (int j = 0; j < n; j++) {
              if (z < i && j < x)
                cout << "1 ";
              else
                cout << "0 ";
            }
            cout << endl;
          }
          return;
        }
      }
    }
    cout << "No" << endl;
  } else {
    cout << "No" << endl;
  }
}