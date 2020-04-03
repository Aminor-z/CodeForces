﻿#pragma warning(disable:4996)
#include <algorithm>
#include <functional>
#include <map>
#include <math.h>
#include <numeric>
#include <iostream>
#include <queue>
#include <set>
#include <stack>
#include <string.h>
#include <sstream>
#include <vector>
using namespace std;
const int MOD = 1e9 + 7;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        string s;
        cin >> x >> s;
        int l = 1;
        while (s.length() < x)
        {
            int len = s.length();
            for (register int i = 1; i < s[l - 1] - '0'; i++)
                s += s.substr(l, len - l);
            ++l;
        }
        long long ans = s.length() % MOD;
        for (register int i = l; i <= x; i++)
        {
            ans = (ans + (ans - i) * (s[i - 1] - '0' - 1) % MOD + MOD) % MOD;
        }
        cout << ans % MOD << endl;
    }

    return 0;
}
