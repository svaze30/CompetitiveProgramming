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
  ll n, k = 0;
  cin >> n;
  ll arr[n];
  loop0(i, n) cin >> arr[i];
  for (ll i = 0; i < n - 1; i++) {
    if (arr[i] < arr[i + 1]) {
      k++;
    }
  }
  ll val;
  if (k == 0) {
    val = 0;
  } else {
    val = k - 1;
  }
  cout << val << endl;
}