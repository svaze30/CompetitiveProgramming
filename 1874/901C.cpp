#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll solve(ll n, ll m)
{
    ll ans = 0;
    n = n % m;
    if (n == 0)
    {
        return 0;
    }
    ll temp = m;
    ll bindigits = 1;
    while (temp > 1)
    {
        if (temp % 2 == 1)
        {
            return -1;
        }
        bindigits++;
        temp = temp / 2;
    }
    ll multiplier = 1;
    while (n % 2 == 0)
    {
        multiplier = multiplier * 2;
        n = n / 2;
        m = m / 2;
        bindigits--;
    }
    ll arr[bindigits - 1];
    temp = n;
    for (ll i = bindigits - 2; i >= 0; i--)
    {
        if (temp % 2 == 1)
        {
            arr[i] = 1;
        }
        else
        {
            arr[i] = 0;
        }
        temp = temp / 2;
    }
    ll mul = 2;
    temp = m;
    for (ll i = 0; i < bindigits - 1; i++)
    {
        m = m / 2;
        ans += arr[i] * (m * (mul - 1));
        mul = mul * 2;
    }
    ans = ans * multiplier;

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    ll n, m;
    cin >> t;
    while (t--)
    {
        ll ans = 0;
        cin >> n >> m;
        ans = solve(n, m);
        cout << ans << endl;
    }
    return 0;
}