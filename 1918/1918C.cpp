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
  ll a, b, r;
  cin >> a >> b >> r;
  vector<ll> arr(64, 0);
  vector<ll> barr(64, 0);

  ll aa = max(a, b), bb = min(a, b);

  ll maxaa = 0;
  for (ll i = 0; i < 64; i++) {
    arr[i] = aa % 2;
    aa /= 2;
    barr[i] = bb % 2;
    bb /= 2;
  }

  ll rr = r;
  ll first = 0;
  for (ll i = 63; i >= 0; i--) {
    if ((arr[i] == 1ll or barr[i] == 1ll) and maxaa == 0) {
      maxaa = i;
    }
    if (arr[i] == 1 && barr[i] == 0) {
      if (first == 0) {
        first++;
        continue;
      }
      if (rr >= (1ll << i)) {
        arr[i] = 0;
        barr[i] = 1ll;
        rr -= (1ll << i);
      }
    }
  }
  ll ax = 0, bx = 0;
  for (ll i = 0; i < 64; i++) {
    if (arr[i] == 1) {
      ax += (1ll << i);
    }
    if (barr[i] == 1) {
      bx += (1ll << i);
    }
  }
  if (ax - bx < 0) {
    // cout << "bruh" << endl;
    // cout << maxaa << endl;
    cout << ((1ll << maxaa) + ax - bx) << endl;
    // cout << ax - bx << endl;
  } else {

    // cout << " no bruh" << endl;
    cout << ax - bx << endl;
  }
}