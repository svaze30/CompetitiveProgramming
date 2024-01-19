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
  ll h, w, xa, ya, xb, yb;
  cin >> h >> w >> xa >> ya >> xb >> yb;
  if (xa >= xb) {
    cout << "DRAW" << endl;
    return;
  }
  if (abs(ya - yb) >= h - xa or abs(ya - yb) >= xb - 1) {
    cout << "DRAW" << endl;
    return;
  }
  if ((xa - xb) % 2 != 0) {
    // alice
    // xb -= xa;

    // yb -= ya;
    ll meet = (xa + xb) / 2;
    ll one = 1;
    if (min(w, yb + xb - meet) < min(w, ya + xa + meet) ||
        max(one, yb + meet - xb) > max(one, ya - meet + xa)) {
      cout << "DRAW" << endl;
    } else {
      cout << "ALICE" << endl;
    }
  } else {
    // bob
    // xb -= xa;
    // yb -= ya;
    ll meet = (xb + xa + 1) / 2;
    ll one = 1;
    if (min(w, ya + meet - xa) < min(w, yb + xb - meet) ||
        max(one, ya - meet + xa) > max(one, yb + meet - xb)) {
      cout << "DRAW" << endl;
    } else {
      cout << "BOB" << endl;
    }
  }
}