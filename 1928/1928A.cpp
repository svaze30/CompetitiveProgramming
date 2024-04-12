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
  ll a, b;
  cin >> a >> b;
  if (a % 2 == 0 and b % 2 == 0) {
    yes;
    return;
  }
  if (a % 2 == 1 and b % 2 == 1) {
    no;
    return;
  }
  if (a % 2 == 0) {
    if (a / 2 == b)
      no;
    else
      yes;
  } else {
    if (2 * a == b)
      no;
    else
      yes;
  }
}