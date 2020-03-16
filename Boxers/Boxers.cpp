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
const int max_limit = 150005;
int a[max_limit];
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	memset(a, 0, sizeof(a));
	int n,t;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> t;
		a[t]++;
	}
	int count = 0;
	for (int i = 1; i < max_limit; i++)
	{
		if (a[i - 1] >= 1)
		{
			count++;
		}
		else if (a[i] >= 1)
		{
			count++;
			a[i]--;
		}
		
		else if (a[i + 1] >= 1) {
			count++;
			a[i + 1]--;
		}
	}
	cout << count << endl;
	return 0;
}

