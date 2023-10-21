#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

typedef long double ld;
typedef long long ll;
typedef vector<int> vi;

#define pb push_back
#define pob pop_back()
#define sz size()
#define M2 ll(1000000007)
#define loop0(i, n) for (ll i = 0; i < n; i++)
#define loop1(i, n) for (ll i = 1; i <= n; i++)
#define o0(a) cout << a << " "
#define o1(a) cout << a << "\n"
#define o2(a, b) cout << a << " " << b << "\n"
#define o3(a, b, c) cout << a << " " << b << " " << c << "\n"
#define o4(a, b, c, d) cout << a << " " << b << " " << c << " " << d << "\n"

void solve()
{

  ll n;
  cin >> n;
  int arr[n][51];
  int rep[51] = {};
  // -- input --
  loop0(i, n)
  {
    int x;
    cin >> x;
    arr[i][0] = x;
    for (size_t j = 1; j <= x; j++)
    {
      int y;
      cin >> y;
      arr[i][j] = y;
      rep[y]++;
    }
  }

  // total number of elements in union
  int total = 0;
  for (size_t i = 1; i < 51; i++)
  {
    if (rep[i] != 0)
      total++;
    // cout << rep[i] << " ";
  }
  cout << total << endl;
  // int minunique = 56;
  // loop0(i, n)
  // {
  //   int unique = 0;
  //   for (size_t j = 1; j <= arr[i][0]; j++)
  //   {

  //     // cout << arr[i][j] << " ";
  //     if (rep[arr[i][j]] == 1 || (arr[i][j] != 0 && arr[i][0] <= minunique))
  //     {
  //       unique++;
  //     }
  //   }
  //   if (unique != 0)
  //     minunique = min(minunique, unique);
  //   // cout << endl;
  // }

  // // cout << endl;
  // if (minunique == 56)
  // {
  //   minunique = 0;
  // }
  // // cout << total << " " << total - minunique << " " << minunique << endl;
  // cout << total - minunique << endl;
}
int main()
{

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  ll T;

  cin >> T;

  loop1(I, T)
  {

    solve();
    // cout<<"Case #"<<I<<": "<<ans<<"\n";
  }
}
