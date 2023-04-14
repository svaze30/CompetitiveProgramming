#include<iostream>

using namespace std;

void solve() {
    int n, count = -1;
    char d;
    cin>>n>>d;
    char str[n], str2[n+1];
    cin>>str;
    for (int i = n-1 ; i >= 0 ; i-- ) {
        if(d<str[i] ){
            count =i;
            break;
        }
    }
    if (count == -1 ) {
        cout<<d<<str;
    } else {
        for (int i = 0 ; i < n; i++){
        if (i == count) {
            cout<<str[i]<<d;
            continue;
        }
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