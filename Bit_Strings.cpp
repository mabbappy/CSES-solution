/**
 *Bismillah Hir Rahmanir Rahim
 *author:mabbappy
 *date: 10 Dec,22
 **/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, ans = 1;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll x = 1e9 + 7;
    // ll n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        ans = ((ans % x) * (2 % x)) % x;
    }
    cout << ans << endl;
}