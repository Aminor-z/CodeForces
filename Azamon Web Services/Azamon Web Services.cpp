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
	int n;
	cin >> n;
	string s1, s2;
	for (int w = 0; w < n; w++)
	{
		cin >> s1 >> s2;
		if (s1 < s2)
		{
			cout << s1 << endl;
			continue;
		}
		string t = s1;
		sort(t.begin(), t.end());
		for (int i = 0; i < s1.size(); i++)
		{
			bool flag = false;
			if (t[i] != s1[i])
			{
				for (int j = s1.size() - 1; j >= 0; j--)
				{
					if (t[i] == s1[j])
					{
						flag = 1;
						swap(s1[i], s1[j]);
						break;
					}
				}
			}
			if (flag) break;
		}
		if (s1 < s2) cout << s1 << endl;
		else cout << "---" << endl;

	}
	return 0;
}
