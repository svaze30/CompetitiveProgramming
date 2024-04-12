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
  int a, b, c;
  cin >> a >> b >> c;
  if (a + 1 != c) {
    cout << -1 << endl;
    return;
  }
  if (a == 0) {
    cout << b << endl;
    return;
  }
  int ans = 0;
  int i = 0;
  int aa = a;
  while ((1 << i) < aa) {
    aa -= (1 << i);
    ans++;
    i++;
  }
  // if (__popcount(a) == 1 and a != 1) {
  //   ans++;
  // }
  b -= aa;
  if (b > 0) {
    ans += ceil((double)b / (double)c);
  }
  cout << ans << endl;
}