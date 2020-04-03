#pragma warning(disable:4996)
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

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	int w;
	cin >> w;
	for (int x = 0; x < w; x++)
	{
		int n;
		cin >> n;
		int ans = 0;
		for (int i = 1; i <= 9; i++) {
			long long int p = i;
			while (p <= n)
			{
				++ans;
				p = 10 * p + i;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
