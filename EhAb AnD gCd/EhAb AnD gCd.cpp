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
using namespace std;


int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	int n;
	while (cin >> n)
	{
		int t;
		for (int i = 0; i < n; i++)
		{
			cin >> t;
			cout << 1 << " " << t - 1 << endl;
		}
	}
	return 0;
}

