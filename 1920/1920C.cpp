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
  vector<int> arr(n);
  loop0(i, n) cin >> arr[i];
  int square_root = (int)sqrt(n) + 1;
  vector<int> divisors;
  for (int i = 1; i < square_root; i++) {
    if (n % i == 0 && i * i != n) {
      divisors.push_back(i);
      divisors.push_back(n / i);
    } else if (n % i == 0 && i * i == n)
      divisors.push_back(i);
  }

  bool prime[n + 1];
  memset(prime, true, sizeof(prime));
  vector<int> pr;
  for (int p = 2; p * p <= n; p++) {
    // If prime[p] is not changed, then it is a prime
    if (prime[p] == true) {
      // Update all multiples of p
      pr.push_back(p);
      for (int i = p * p; i <= n; i += p)
        prime[i] = false;
    }
  }

  loop0(i, divisors.size()) cout << divisors[i] << ' ';
  cout << endl;
  loop0(i, pr.size()) cout << pr[i] << ' ';
  cout << endl;
  int ans = 0;
  for (int i = 0; i < divisors.size(); i++) {
    int k = divisors[i];
    for (int j = 0; j < pr.size(); j++) {
      int m = pr[i];
      vector<int> dup(n);
      loop0(i, n) dup[i] = arr[i] % m;
        }
  }
}