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
	long long n;
	while (cin >> n)
	{
		for (int w = 0; w < n; w++) {
			int s;
			cin >> s;
			set<int> _set;
			for (int i = 0; i < s; i++)
			{
				int t;
				cin >> t;
				_set.insert(t);
			}
			cout << _set.size() << endl;
		}
	}
	return 0;
}

