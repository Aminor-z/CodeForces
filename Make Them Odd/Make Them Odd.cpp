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
	int x;
	cin >> x;
	for (int w = 0; w < x; w++)
	{
		register int n, t;
		cin >> n;
		set <int>_set;
		for (int i = 0; i < n; i++)
		{
			cin >> t;
			if (!(t & 1))
				_set.insert(t);
		}
		register int count = 0;
		while (_set.size() > 0)
		{
			t = *_set.rbegin();
			_set.erase(t);
			t >>= 1;
			if (!(t & 1))_set.insert(t);
			++count;
		}
		cout << count << endl;
	}

	return 0;
}
