#include <iostream>

void solve();

using namespace std;

int main () {
  int t;
  cin >> t;

  while (t--)
    solve();

  return 0;
}

void solve() {
  string arr;
  string pi = "314159265358979323846264338327";
  cin >> arr;
  int i;
  for ( i = 0; i < arr.length(); i++) {
    if (arr[i] != pi[i]) {
      cout << i << endl;
      return;
    }
  }
  cout << i << endl;
}
