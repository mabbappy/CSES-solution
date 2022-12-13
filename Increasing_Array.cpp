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
    int ar[n + 5];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    ll diff = 0;
    for (int i = 1; i < n; i++)
    {
        if (ar[i] < ar[i - 1])
        {
            diff += (ar[i - 1] - ar[i]);
            ar[i] = ar[i - 1];
        }
    }
    cout << diff << endl;
}