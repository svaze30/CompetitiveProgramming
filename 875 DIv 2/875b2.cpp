#include <iostream>

void solve();

using namespace std;

void getArr(int arr[], int size) {
    for (size_t i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

int main () {
    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}

void solve() {
    int n ;
    cin >> n;

    int a[n];
    int b[n];

    getArr(a, n);
    getArr(b, n);

    int ans = 0;
    int i = 0 ; int j = 0;
    int c = 0;
        while (i < n && j < n)
        {
             if (a[i] == a[i+1]) {
                c++;
                i++;
            }else if (b[j] == b[j+1]) {
                c++;
                j++;
            }else if (b[j] == a[i+1]) {
                c++;
                j++;
                i++;
            }else if (a[i] == b[j+1]) {
                c++;
                i++;
                j++;
            }else {
                c = 0;
                i++;
                j++;
            }
            ans = max(ans, c);
        }
        if (ans >= n ) {
            ans--;
        }

        cout << ans + 1 <<endl;
    
        
        
        
        
    
    
    
}