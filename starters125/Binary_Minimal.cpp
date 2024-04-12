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

int n, k;
void solve() {
  cin >> n >> k;
  string s;
  cin >> s;
  int kk = k;
  for (int i = 0; i < n; i++) {
    if (kk) {
      if (s[i] == '1')
        s[i] = 'x';
    }
  }
  int in = 0;
  for (int i = 0; i < n - kk; i++) {
    if (s[in] != 'x') {
      cout << s[in++];
    } else {
      in++;
      i--;
    }
  }
  cout << endl;
}