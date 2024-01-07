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
  int arr[n][n - 1];
  int a = 0, b = 0, f = 0;
  loop0(i, n) {
    loop0(j, n - 1) { cin >> arr[i][j]; }
    if (i > 0)
      if (arr[i][0] == arr[(i - 1) % n][0])
        f = arr[i][0];
  }
  if (n == 3) {
    if (arr[0][0] == arr[1][0]) {
      cout << arr[0][0] << " ";
      loop0(i, n - 1) cout << arr[2][i] << " ";
      cout << endl;
    } else if (arr[0][0] == arr[2][0]) {
      cout << arr[0][0] << " ";
      loop0(i, n - 1) cout << arr[1][i] << " ";
      cout << endl;
    } else {
      cout << arr[1][0] << " ";
      loop0(i, n - 1) cout << arr[0][i] << " ";
      cout << endl;
    }
    return;
  } else {
    cout << f << " ";
    int line = 0;
    loop0(i, n) {
      if (arr[i][0] != f)
        line = i;
    }
    loop0(i, n - 1) cout << arr[line][i] << ' ';
    cout << endl;
  }
}