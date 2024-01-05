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
  int n;
  cin >> n;
  int arr[n];

  loop0(i, n) cin >> arr[i];
  int &min = *min_element(arr, arr + n);
  int i;
  for (i = 0; i < n; i++) {
    if (arr[i] == min)
      break;
  }
  for (int j = i + 1; j < n - 1; j++) {
    if (arr[j] > arr[j + 1]) {
      cout << -1 << endl;
      return;
    }
  }
  cout << i << endl;
}