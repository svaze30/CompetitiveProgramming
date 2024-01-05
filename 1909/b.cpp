#include <bits/stdc++.h>
#define endl "\n"
typedef unsigned long long ll;

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
  ll t = 1;
  cin >> t;

  while (t--)
    solve();

  return 0;
}
ll bruh(ll n) {
  ll pow = 2;
  while (n % pow == 0) {
    pow = pow * 2;
  }
  return pow / 2;
}
ll bruh3(ll n) {
  ll pow = 3;
  while (n % pow == 0) {
    pow = pow * 3;
  }
  return pow / 3;
}

void solve() {
  ll n;
  cin >> n;

  ll arr[n];
  loop0(i, n) cin >> arr[i];

  ll min2power[n];
  ll min3power[n];
  bool alleven = true;
  bool allodd = true;
  loop0(i, n) {
    if (arr[i] % 2 == 0) {
      allodd = false;
      min2power[i] = bruh(arr[i]);
    } else {
      alleven = false;
      min3power[i] = bruh3(arr[i]);
    }
  }
  if (!alleven && !allodd) {
    cout << 2 << endl;
    return;
  }
  if (alleven) {
    cout << (*min_element(min2power, min2power + n)) * 2 << endl;
    return;
  }
  if (allodd) {
    cout << (*min_element(min3power, min3power + n)) * 3 << endl;
    return;
  }
}