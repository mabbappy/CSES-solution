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
    if (n == 1)
    {
        cout << 1 << endl;
    }
    else if (n < 4)
    {
        cout << "NO SOLUTION" << endl;
    }
    else
    {
        // cout << 2<< ' ' << 4 << ' ';
        for (ll i = 2; i <= n; i += 2)
        {
            cout << i << ' ';
        }
        // cout << endl;
        for (ll i = 1; i <= n; i += 2)
        {
            cout << i << ' ';
        }
        cout << endl;
    }
    return 0;
}