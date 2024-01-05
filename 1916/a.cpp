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
  ll n, k, prod = 1;
  cin >> n >> k;
  ll arr[n];
  loop0(i, n) {
    cin >> arr[i];
    prod *= arr[i];
  }
  if (2023 % prod == 0) {
    cout << "YES" << endl;
    cout << 2023 / prod << " ";
    loop0(i, k - 1) cout << "1 ";
    cout << endl;
  } else {
    cout << "NO" << endl;
  }
}