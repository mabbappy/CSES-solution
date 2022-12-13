/**
 *Bismillah Hir Rahmanir Rahim
 *author:mabbappy
 *date: 10 Dec,22
 **/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++)
    {
        ll ans = (((pow(i, 4) - (i * i)) / 2) - ((4 * (i * i)) - (12 * i) + 8));
        cout << ans << endl;
    }
}