#include <iostream> 

using namespace std;

int main (int argc, char *argv[]) {
  int arr[100][100];
  for (int i = 0; i < 100; i++) {
    for (int j = 0 ; j <= i ; j++) {
      cin >> arr[i][j];
    }
  }
  for (int i = 98 ; i >= 0 ; i --) {
    for (int j = 0 ; j <= i ; j ++) {
      arr[i][j] += max(arr[i+1][j], arr[i+1][j+1]);
    }
  }
  cout << endl << arr[0][0] << endl;

  return 0;
}
