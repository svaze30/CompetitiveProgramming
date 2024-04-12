#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;
#define loop0(i, n) for (ll i = 0; i < n; i++)
#define loop1(i, n) for (ll i = 1; i <= n; i++)
#define mp make_pair
#define F first
#define S second
#define pb push_back
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void debug(auto arr) {
  for (auto i : arr)
    cout << i << ' ';
  cout << endl;
}

void solve();

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
  vector<ll> a(n);
  loop0(i, n) cin >> a[i];

  for (int i = 0; i < n - 2; i++) {
    if (a[i] < 0) {
      no;
      return;
    }
    a[i + 1] -= 2 * a[i];
    a[i + 2] -= a[i];
    a[i] = 0;
  }
  if (a[n - 1] != 0 or a[n - 2] != 0) {
    no;
  } else
    yes;
}