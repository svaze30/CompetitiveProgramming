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
  bool zero = false;
  int neg = 0;

  loop0(i, n) {
    cin >> arr[i];
    if (arr[i] == 0)
      zero = true;
    if (arr[i] < 0)
      neg++;
  }
  if (zero || neg % 2 == 1) {
    cout << 0 << endl;
  } else {
    cout << 1 << endl;
    cout << 1 << " " << 0 << endl;
  }
}