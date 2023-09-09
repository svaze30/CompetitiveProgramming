#include<iostream>

using namespace std;

void solve() {
    int n;
    cin>>n;
    char str[n];
    cin>>str;
    int min = str[0] - 'a';
    int mini = 0;
    for (int i = 0 ; i< n ; i++) {
        if (min >= str[i] - 'a') {
            min = str[i] - 'a';
            mini = i;
        }
    }
    for(int i = 0 ; i< n ; i++) {
        if(i==0) {
            cout<<str[mini];
        } else if ( i == mini) {
            cout<<str[0];
        } else {
            cout<<str[i];
        }
    }
   
    cout<<endl;
}

int main () {
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    

    return 0;
}