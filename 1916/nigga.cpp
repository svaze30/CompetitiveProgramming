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
  int n;
  cin >> n;
  string arr;
  cin >> arr;

  // string ans = "";
  char ans[n + 1];
  int ansindex = 0;
  int np = 0;

  for (int i = 0; i < (n - 1) / 2; i++) {
    // ans = ans + "P";
    ans[ansindex++] = 'P';
    if (arr[i] == 'R') {
      np++;
    }
  }
  for (int i = (n - 1) / 2; i < n; i++) {
    if (np != 0) {
      // ans = ans + 'P';
      ans[ansindex++] = 'P';
      if (arr[i] != 'R') {
        np--;
      }
    } else {
      if (arr[i] == 'R') {
        // ans = ans + 'P';
        ans[ansindex++] = 'P';
      } else if (arr[i] == 'P') {
        // ans = ans + 'S';
        ans[ansindex++] = 'S';
      } else {
        // ans = ans + 'R';
        ans[ansindex++] = 'R';
      }
    }
  }
  ans[ansindex++] = '\0';
  cout << ans << endl;
}