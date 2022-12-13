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
    ll ans = 0;
    while (n >= 1)
    {
        ans += n / 5;
        n /= 5;
    }
    cout << ans << endl;
}