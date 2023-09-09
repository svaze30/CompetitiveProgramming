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
  int xa, ya, xb, yb, xc, yc;
  cin >> xa >> ya >> xb >> yb >> xc >> yc ;
  xb -= xa;
  xc -= xa;
  yb -= ya;
  yc -= ya;
  if (xb*xc < 0 || yb*yc < 0){
    
  }
}