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
        int n;
        cin >> n;
        char text[n];
        cin >> text;
        int max = 0;
        int tt = 0;
        for (size_t i = 1; i < n; i++)
        {
            
            if ((text[i - 1] - text[i]) == 0) {
                tt++;
            } else {
                tt = 0;
            }
            if (tt >= max) {
                max = tt;
            }
        }
        cout << max + 2 << endl;
        
    }