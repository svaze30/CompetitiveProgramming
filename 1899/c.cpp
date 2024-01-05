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
int maxSubArraySum(int a[], int size) {
  int max_so_far = INT_MIN, max_ending_here = 0;

  for (int i = 0; i < size; i++) {
    max_ending_here = max_ending_here + a[i];
    if (max_so_far < max_ending_here)
      max_so_far = max_ending_here;

    if (max_ending_here < 0)
      max_ending_here = 0;
    if (i < size) {
      if (abs(a[i]) % 2 == abs(a[i + 1] % 2))
        max_ending_here = 0;
    }
  }
  return max_so_far;
}

void solve() {
  int n;
  cin >> n;
  int arr[n];
  loop0(i, n) cin >> arr[i];
  int max_sum = maxSubArraySum(arr, n);
  cout << max_sum << endl;
}