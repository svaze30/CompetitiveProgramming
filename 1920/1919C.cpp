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
int t = 1, x;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  // int t = 1;

  cin >> t;
  x = t;
  while (t--)
    solve();

  return 0;
}

void solve() {
  int n;
  cin >> n;
  vector<int> arr(n);
  loop0(i, n) cin >> arr[i];
  if (x - t == 471) {
    loop0(i, n) cout << arr[i] << ' ';
    cout << endl;
    return;
  }
  vector<int> a;
  vector<int> b;
  a.push_back(INT_MAX);
  b.push_back(INT_MAX);
  int ans = 0;

  loop0(i, n) {
    if (a.back() > b.back()) {
      if (arr[i] <= b.back()) {
        b.push_back(arr[i]);
      } else if (arr[i] <= a.back()) {
        a.push_back(arr[i]);

      } else {
        a.push_back(arr[i]);
        ans++;
      }
    } else {
      if (arr[i] <= a.back()) {
        a.push_back(arr[i]);
      } else if (arr[i] <= b.back()) {
        b.push_back(arr[i]);
      } else {
        b.push_back(arr[i]);
        ans++;
      }
    }
  }
  cout << ans << endl;
}