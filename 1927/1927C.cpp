#include <bits/stdc++.h>
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

using namespace std;

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
  int n, m, k;
  cin >> n >> m >> k;
  vector<int> a(n), b(m);
  vector<int> arr(k + 1, 0);
  loop0(i, n) cin >> a[i];
  loop0(i, m) cin >> b[i];
  int na = 0, nb = 0;

  loop0(i, n) {
    if (a[i] <= k and arr[a[i]] == 0) {
      arr[a[i]] = 1;
      na++;
    }
  }

  loop0(i, m) {
    if (b[i] <= k and arr[b[i]] == 0) {
      arr[b[i]] = 2;
      nb++;
    }
  }
  loop1(i, k) {
    if (arr[i] == 0) {
      no;
      return;
    }
  }
  if (na == k / 2 and nb == k / 2) {
    yes;
    return;
  }
  // cout << na << ' ' << nb << endl;
  loop0(i, m) {
    if (b[i] <= k and arr[b[i]] == 1) {
      arr[b[i]] = 2;
      na--;
      nb++;
      if (na == k / 2) {
        yes;
        return;
      }
    }
  }
  no;
}