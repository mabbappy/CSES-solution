/**
 *Bismillah Hir Rahmanir Rahim
 *author:mabbappy
 *date:8 Dec,22
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
    vector<ll> v;
    cout << n << ' ';
    while (n > 1)
    {
        if (n % 2 == 0)
        {
            v.push_back(n / 2);
            n /= 2;
        }
        else
        {
            v.push_back(n * 3 + 1);
            n = n * 3 + 1;
        }
    }
    for (ll i = 0; i < v.size(); i++)
    {
        cout << v[i] << ' ';
    }
    cout << endl;
}