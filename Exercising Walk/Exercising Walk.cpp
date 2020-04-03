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

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	int n;
	cin >> n;
	while (n--)
	{
		int l, r, d, u, nx, ny, x1, y1, x2, y2;
		cin >> l >> r >> d >> u;
		cin >> nx >> ny >> x1 >> y1 >> x2 >> y2;
		if (l > 0 || r > 0)
		{
			if (x2 - x1 == 0)
			{
				cout << "NO\n";
				continue;
			}
		}
		if (u > 0 || d > 0)
		{
			if (y2 - y1 == 0)
			{
				cout << "NO\n";
				continue;
			}
		}
		if (x1 <= nx - l + r && x2 >= nx - l + r && y1 <= ny + u - d && y2 >= ny + u - d)
			cout << "YES\n";

		else
			cout << "NO\n";
	}
	return 0;
}

