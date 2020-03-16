#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
#include <queue>
#include <map>
#include <stack>
#include <stdio.h>
#include <string>
#include <set>
using namespace std;


long long  a[400010];
long long  gcd(long long  a, long long  b)
{
    return b == 0 ? a : gcd(b, a % b);
}
long long  ApproximateNumber(long long  n)
{
    long long  cnt = 0;
    for (long long  i = 1; i * i <= n; i++)
        if (n % i == 0)
        {
            if (i * i == n)
                cnt++;
            else
                cnt += 2;
        }
    return cnt;
}
int main()
{
    long long  n; cin >> n;
    cin >> a[1];
    long long  ans = a[1];
    for (long long  i = 2; i <= n; i++)
    {
        cin >> a[i];;
        ans = gcd(ans, a[i]);
    }
    cout << ApproximateNumber(ans) << endl;
    return 0;
}