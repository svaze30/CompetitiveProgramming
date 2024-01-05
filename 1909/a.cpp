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
  int arr1[n];
  int arr2[n];
  int a = 0, b = 0, c = 0, d = 0;

  loop0(i, n) {
    cin >> arr1[i];
    cin >> arr2[i];
  }

  loop0(i, n) {
    if (arr1[i] == 0 && arr2[i] == 0)
      continue;

    if (arr1[i] < 0 && arr2[i] < 0)
      a = 1; // 3rd quad
    if (arr1[i] > 0 && arr2[i] > 0)
      b = 1; // 1st quad
    if (arr1[i] < 0 && arr2[i] > 0)
      c = 1; // 2nd quad
    if (arr1[i] > 0 && arr2[i] < 0)
      d = 1; // 4th quad
    }

  cout << "YES" << endl;
  return;
}