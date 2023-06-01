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
    int n;
    cin >> n;
    int a[n];
    int b[n];

    getArr(a, n);
    getArr(b, n);

    int arr1[2*n];
    int arr2[2*n];
    int arr3[2*n];
    int arr4[2*n];

    for (size_t i = 0; i < n; i++)
    {
        arr1[i] = a[i];
        arr2[i] = b[i];
        arr3[i] = b[i];
        arr4[i] = a[i];
    }
    for (size_t i = 0; i < n; i++)
    {
        arr1[n + i] = b[i];
        arr2[n + i] = a[i];
        arr3[n + i] = a[n-1-i];
        arr4[n + i] = b[n-1-i];
    }
    int max1 = 0;
    int c = 0;
    for (size_t i = 1; i < 2*n; i++)
    {
        
        if (arr1[i] == arr1[i-1]) {
            c++;
        } else {
            c = 0;
        }
        max1 = max(max1, c);

    }
    c= 0;
    for (size_t i = 1; i < 2*n; i++)
    {
        
        if (arr2[i] == arr2[i-1]) {
            c++;
        } else {
            c = 0;
        }
        max1 = max(max1, c);

    }
    c = 0;
    for (size_t i = 1; i < 2*n; i++)
    {
        
        if (arr3[i] == arr3[i-1]) {
            c++;
        } else {
            c = 0;
        }
        max1 = max(max1, c);

    }
    c = 0;
    for (size_t i = 1; i < 2*n; i++)
    {
        
        if (arr4[i] == arr4[i-1]) {
            c++;
        } else {
            c = 0;
        }
        max1 = max(max1, c);
    }

    cout << max1 + 1 << endl;
    
    

}