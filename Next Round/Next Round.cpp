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
	int n, k,t;
	cin >> n >> k;
	vector<int> v;
	int positive = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> t;
		if (t > 0)
		{
			v.push_back(t);
			positive++;
		}
	}
	sort(v.begin(), v.end(), greater<int>());
	int ans = min(k,positive);
	for (int i = k; i < v.size();i++)
	{
		if (v[i] == v[i - 1])ans++;
		else break;
	}
	cout << ans<< endl;
	return 0;
}

