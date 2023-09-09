#include <iostream>

using namespace std;

int main (int argc, char *argv[]) {
  int n, m;

  cin >> n >> m;
  int steps = 0;
  while(true) { 
    if (m == n) {
      cout << steps << endl;
      break;
    }
    if (n > m){
      steps += n - m;
      cout << steps << endl;
      break;
    } else if (m % 2 == 0) {
      m /= 2;
      steps++;
    } else {
      m++;
      steps++;
    }
  } 
  return 0;
}
