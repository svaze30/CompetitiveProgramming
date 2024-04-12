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
  int x;
  cin >> x;
  int a = x, b = 0;
  bitset<33> aa(a);
  bitset<33> bb(b);
  cout << aa << ' ' << bb << endl;
  for (int i = 32; i >= 0; i--) {
    if (x & (1 << i) > 0) {
      continue;
    }
    if (2 * x - aa.to_ulong() - bb.to_ulong() >= (2 << i)) {
      aa.set(i);
      bb.set(i);
    }
  }
  a = aa.to_ulong(), b = bb.to_ulong();
  if ((a + b == 2 * x) and (a ^ b == x)) {
    cout << a << ' ' << b << endl;
  } else {
    cout << -1 << endl;
  }
}