#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
#define loop0(i, n) for (ll i = 0; i < n; i++)
#define loop1(i, n) for (ll i = 1; i <= n; i++)

void solve();

using namespace std;

int arr[31];
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t = 1;
  cin >> t;
  arr[0] = 1;
  for (int i = 1; i < 31; i++) {
    arr[i] = 2 * arr[i - 1];
  }

  while (t--)
    solve();

  return 0;
}

void solve() {
  ll n, q, temp;
  cin >> n >> q;
  ll a[n];
  vector<ll> x;
  loop0(i, n) cin >> a[i];
  cin >> temp;
  x.push_back(temp);
  loop0(i, q - 1) {
    cin >> temp;
    if (temp < x.back())
      x.push_back(temp);
  }
  ll sz = x.size();

  loop0(i, n) {
    loop0(j, sz) {
      if (a[i] % 2 != 0)
        break;
      if (a[i] % arr[x[j]] == 0) {
        a[i] += arr[x[j]] / 2;
      }
    }
  }

  loop0(i, n) cout << a[i] << " ";
  cout << endl;
}