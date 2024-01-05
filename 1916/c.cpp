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
  ll n, nodd = 0;
  cin >> n;
  ll arr[n], odd[n] = {0};
  ll x = 0;
  loop0(i, n) {
    cin >> arr[i];
    if (arr[i] % 2 == 1) {
      x++;
      odd[i] = x;
    } else {
      odd[i] = x;
    }
  }
  ll sum = 0;
  for (int i = 0; i < n; i++) {
    sum += (ll)arr[i];
    if (i == 0 || odd[i] == 0) {
      cout << sum << " ";
    } else if (odd[i] == 1) {
      cout << sum - 1 << " ";
    } else {
      ll term = (odd[i] + 1) % 3;
      ll term2 = (odd[i] - 2) / 3;
      cout << sum - term - term2 << " ";
    }
  }
  cout << endl;
}