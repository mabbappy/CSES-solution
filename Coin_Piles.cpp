/**
 *Bismillah Hir Rahmanir Rahim
 *author:mabbappy
 *date: 13 Dec,22
 **/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll tt;
    cin >> tt;
    while (tt--)
    {
        ll a, b;
        cin >> a >> b;
        int x = min(a, b);
        int y = max(a, b);
        if ((a + b) % 3 == 0 and (x * 2 >= y))
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}