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
		if (n == 2)
		{
			cout << "NO" << endl;
		}
		else
		if (n & 1)
		{
			cout << "NO" << endl;

		}
		else cout << "YES" << endl;
	}
	return 0;
}

