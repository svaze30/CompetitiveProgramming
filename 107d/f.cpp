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
  string s;
  cin >> s;
  string s1 = s, s0 = s;
  int ans1 = 0, ans2 = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == '0')
      ans1++;
  }
  if (ans1 == n || ans1 == 0) {
    cout << "YES" << endl;
    return;
  }
  if (n == 2) {
    cout << "NO" << endl;
    return;
  }
  if (n == 3) {
    if (s == "101" || s == "010") {
      cout << "NO" << endl;
      return;
    }
  }
  bool right1 = true, right0 = true;
  ;
  for (int i = 0; i < n; i++) {
    if (i != n - 1) {

      if (s[i] == '1' && s[i + 1] == '1') {
        i++;
        continue;
      } else if (s[i] == '0' && s[i + 1] == '0') {
        i++;

      } else if (s[i] == '1') {
      } else {
        right1 = false;
      }
    }
    if (right1 && i == n) {
      cout << "YES" << endl;
      return;
    }
    if (right1 && s[i] == '1') {
      cout << "YES" << endl;
      return;
    }
    // else {
    //   cout << "NO" << endl;
    //   return;
    // }
  }
  for (int i = 0; i < n; i++) {
    if (i != n - 1) {

      if (s[i] == '1' && s[i + 1] == '1') {
        i++;
        continue;
      }
      if (s[i] == '0' && s[i + 1] == '0') {
        i++;
        continue;
      } else if (s[i] == '0') {

      } else {

        right0 = false;
      }
    }
    if (right0 && i == n) {
      cout << "YES" << endl;
      return;
    }
    if (right0 && s[i] == '0') {
      cout << "YES" << endl;
      return;
    }
    // else {
    //   cout << "NO" << endl;
    //   return;
    // }
  }
  cout << "NO" << endl;
  return;
}