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
  // cin >> t;

  while (t--)
    solve();

  return 0;
}

bool islucky(string s, int n) {
  int a = 0, b = 0;
  for (int i = 0; i < n / 2; i++) {
    a += s[i] - '0';
    b += s[n / 2 + i] - '0';
  }
  return a == b;
}

void solve() {
  int n;
  cin >> n;
  string arr[n];
  loop0(i, n) cin >> arr[i];
  // loop0(i, n) cout << arr[i];
  int ans = 0;
  loop0(i, n) {
    for (int j = 0; j < n; j++) {
      int x = arr[i].length() + arr[j].length();
      if ((x) % 2 != 0) {

      } else {
        string bruh = arr[i];
        bruh = bruh + arr[j];
        if (islucky(bruh, x)) {
          ans++;
          // cout << arr[i] << " " << arr[j] << endl;
        }
      }
    }
  }
  cout << ans << endl;
}