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
  // cin >> t;

  while (t--)
    solve();

  return 0;
}
int arr[1001] = {0};
void solve() {
  int n, t;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> t;
    arr[t]++;
  }
  for (int i = 1; i <= n; i++) {
    if (arr[i] != 1) {
      cout << "No";
      return;
    }
  }
  cout << "Yes" << endl;
}