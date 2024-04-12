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
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define vll vector<ll>
#define pi pair<int, int>
#define pll pair<ll, ll>

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
  ll n, c, d;
  cin >> n >> c >> d;
  vector<vector<ll>> arr(n, vector<ll>(n, 1));
  vll a(n * n);
  vll b(n * n);
  loop0(i, n * n) cin >> a[i];
  sort(all(a));
  arr[0][0] = a[0];
  for (int i = 1; i < n; i++) {
    arr[0][i] = arr[0][i - 1] + c;
  }
  for (int i = 1; i < n; i++) {
    for (int j = 0; j < n; j++) {
      arr[i][j] = arr[i - 1][j] + d;
    }
  }
  int x = 0;
  loop0(i, n) loop0(j, n) b[x++] = arr[i][j];
  // loop0(i, n * n) cout <<
  sort(all(b));
  // debug(b);
  for (int i = 0; i < n * n; i++) {
    if (a[i] != b[i]) {
      no;
      return;
    }
  }
  yes;
}