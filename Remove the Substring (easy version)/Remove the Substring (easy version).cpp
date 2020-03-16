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
const int max_limit = 2e2 + 10;
int first[max_limit];
int last[max_limit];
int main()
{
    string a, b;
    cin >> a >> b;
    for (int i = 0,j=0; i < a.length() && j < b.length(); i++)
    {
        if (a[i] == b[j])
        {
            first[j++] = i;
        }

    }
    for (int i = a.length() - 1,j=b.length()-1; i >= 0 && j >= 0; i--)
    {
        if (a[i] == b[j])
        {
            last[j--] = i;
        }
    }
    int ans = max(last[0], (int)a.length() - first[b.length() - 1]-1);
    for (int i = 0; i < b.length()-1; i++)
    {
        ans = max(ans, last[i + 1] - first[i]-1);
    }
    cout << ans << endl;
    return 0;
}
