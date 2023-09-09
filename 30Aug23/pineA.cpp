#include <iostream>

using namespace std;

void solve() {
  int n, a, q;
  cin >> n >> a >> q;
  string str;
  cin >> str;
  if ( a == n) {
    cout << "YES" << endl;
    return;
  }
  int poss = 0, sure = 0;
  char prev = str[0];
  for (int i = 0; i < q; i++) {
    if (str[i] == '+') {
      poss++;
      sure++;
    }
    if (str[i] == '-') {
      sure--;
    }
    if (sure == n - a) {
      cout << "YES" << endl;
      return;
    }
    
  }
  if (poss >= n - a) {
    cout << "MAYBE" << endl;
    return;
  }
  cout << "NO" <<endl;
}

int main (int argc, char *argv[]) {
  int t; 
  cin >> t;
  while (t--) solve();
  return 0;
}
