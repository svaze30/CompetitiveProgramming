#include <iostream>

using namespace std;

void solve() {
  string a, b;
  cin >> a >> b;
  int n = a.length();
  int ans = 0;
  int bruh = 0;
  int gay = 0;
  for (int i = 1 ; i < n-1; i++) {
    if (a[i] == b[i]) {
      
        bruh++;
      if (a[i] == '0' && (a[i+1]=='1' && b[i+1]=='1')) {
        gay = 1;
      }


      
        
      
    }

  } 
  if (bruh == n-2) {
    cout << "YES" << endl;
    return;
  }
  int ind0 = 0; 
  int ind1 = n - 1;
  for(int i = 1; i< n; i++ ) {
    if (a[i] == b[i]) {
      if (a[i] == '0') {
        ind0 = i;
      } 
    }
  }
 for(int i = n - 2; i > 0; i-- ) {
    if (a[i] == b[i]) {
      if (a[i] == '1') {
        ind1 = i;
      }}
  }
  if (ind0 == ind1 - 1 || ind0 == n - 2 || ind1 == 1) {
    cout << "YES" <<endl;
    return;
  }

  cout << "NO" << endl;
}

int main (int argc, char *argv[]) {
  int t;
  cin >> t;
  while (t--) {
    solve(); 
  }
  return 0;
}
