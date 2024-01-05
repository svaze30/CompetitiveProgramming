#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
#define loop0(i, n) for (ll i = 0; i < n; i++)
#define loop1(i, n) for (ll i = 1; i <= n; i++)

#define mp make_pair;
#define F first;
#define S second;
#define pb push_back;

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> primes;
  bool prime[100'001];
  memset(prime, true, sizeof(prime));

  for (int p = 2; p * p <= 100'000; p++) {
    if (prime[p] == true) {
      for (int i = p * p; i <= 100'000; i += p)
        prime[i] = false;
    }
  }

  for (int p = 2; p <= 100'000; p++)
    if (prime[p])
      primes.push_back(p);

  vector<ll> ans;
  for (auto i : primes) {
    ll k = i;
    while ((ll)i * k <= 1'000'000'000'000) {
      ans.push_back((ll)i * k);
      k = k * (ll)i;
    }
  }
  sort(ans.begin(), ans.end());
  cout << ans.size() << endl;
  // loop0(i, ans.size()) cout << ans[i] << " ";
  ll n;
  cin >> n;
  int i;
  for (i = 0; ans[i] <= n; i++) {
  }

  cout << n - i << endl;

  return 0;
}
