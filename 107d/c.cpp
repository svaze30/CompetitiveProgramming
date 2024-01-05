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
  deque<int> dq;
  dq.push_back(1);
  dq.push_back(2);

  for (int i = 3; i <= n; i++) {
    int x = dq.back();
    dq.pop_back();
    int y = dq.back();
    dq.push_back(x);
    if (i == x ^ y) {
      dq.push_front(i);
    } else {
      dq.push_back(i);
    }
  }
  while (!dq.empty()) {
    int x = dq.front();
    cout << x << " ";
    dq.pop_front();
  }

  cout << endl;
}