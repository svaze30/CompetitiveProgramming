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
  ll n;
  cin >> n;
  vector<ll> a(n), b(n);
  vector<ll> pa(n), pbb(n);
  loop0(i, n) cin >> a[i];
  loop0(i, n) cin >> b[i];
  pa[0] = a[0];
  pbb[0] = b[0];
  loop1(i, n - 1) pa[i] = pa[i - 1] + a[i];
  loop1(i, n - 1) pbb[i] = pbb[i - 1] + b[i];
  sort(pa.begin(), pa.begin() + (pa.size() - 1));
  sort(pbb.begin(), pbb.begin() + (pbb.size() - 1));
  for (int i = 0; i < n; i++) {
    if (pa[i] != pbb[i]) {
      no;
      return;
    }
  }
  yes;
}