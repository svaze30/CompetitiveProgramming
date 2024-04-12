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
  vector<ll> arr(n);
  loop0(i, n) {
    cin >> arr[i];
    arr[i] += i + 1;
  }
  sort(arr.begin(), arr.end());
  reverse(arr.begin(), arr.end());

  for (ll i = 0; i < n - 1; i++) {
    if (arr[i] <= arr[i + 1]) {
      ll minus = 1;
      ll a = i + 1;
      while (a < n and arr[a] >= arr[i])
        arr[a++] = arr[i] - minus++;
    }
  }
  debug(arr);
}