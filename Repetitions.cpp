/**
 *Bismillah Hir Rahmanir Rahim
 *author:mabbappy
 *date: 8 Dec,22
 **/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    int cnt = 1, i = 1, mx_cnt = 0;
    while (s[i] != '\0')
    {
        if (s[i - 1] == s[i])
        {
            cnt++;
        }
        else
        {
            mx_cnt = max(cnt, mx_cnt);
            cnt = 1;
        }
        i++;
    }
    mx_cnt = max(mx_cnt, cnt);
    cout << mx_cnt << endl;
}