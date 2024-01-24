#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
#define loop0(i, n) for (ll i = 0; i < n; i++)
#define loop1(i, n) for (ll i = 1; i <= n; i++)

#define mp make_pair;
#define F first;
#define S second;
#define pb push_back;

using namespace std;

// void debug(auto arr) {
//   for (auto i : arr)
//     cout << i << ' ';
//   cout << endl;
// }

void solve();

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t = 1;
  // cin >> t;

  while (t--)
    solve();

  return 0;
}

void solve() {
  int n, changes = 0, s = 1, e = 1;
  cin >> n;

  int arr[n + 2];
  arr[0] = 0, arr[n + 1] = INT_MAX;

  loop1(i, n) cin >> arr[i];
  bool anspossible = true;
  for (int i = 0; i < n + 1; i++) {
    if (arr[i] > arr[i + 1]) {
      if (changes == 0) {
        s = i;
        changes++;
      } else if (changes == 1) {
        continue;
      } else {
        anspossible = false;
        break;
      }
    }
    if (arr[i] < arr[i + 1]) {
      if (changes == 0)
        continue;
      if (changes == 1) {
        e = i;
        changes++;
      }
    }
  }
  if (!anspossible) {
    cout << "no" << endl;
    return;
  }
  if (arr[e] > arr[s - 1] && arr[s] < arr[e + 1]) {
    cout << "yes" << endl;
    // cout << s << ' ' << e << endl;
  } else {
    cout << "no" << endl;
  }
}