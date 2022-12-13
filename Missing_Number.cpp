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
    int ar[n + 5];
    for (int i = 0; i < n - 1; i++)
    {
        cin >> ar[i];
    }
    ll sum = 0;
    sum = (n * (n + 1)) / 2;
    ll sum1 = 0;
    for (int i = 0; i < n - 1; i++)
    {
        sum1 += ar[i];
    }
    cout << sum - sum1 << endl;
}