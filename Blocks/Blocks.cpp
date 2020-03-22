#pragma warning(disable:4996)
#include <algorithm>
#include <map>
#include <math.h>
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
	string s;
	cin >> s;
	int B = 0, W = 0;
	for (char t : s)
	{
		if (t == 'B')B++;
		else W++;
	}
	if (B == 0 || W == 0)
	{
		cout << 0 << endl;
	}
	else
		if (B & 1 && W & 1)
		{
			cout << -1 << endl;
			return 0;
		}
		else
		{
			vector<int> v;
			int ans = 0;
			if (B & 1)
			{
				for (string::iterator iter = s.begin(); iter != s.end() - 1; iter++)
				{
					if (*iter != 'B')
					{
						ans++;
						v.push_back(iter - s.begin() + 1);
						*iter = (*iter == 'B') ? 'W' : 'B';
						*(iter + 1) = (*(iter + 1) == 'B') ? 'W' : 'B';
					}
				}
			}
			else
			{
				for (string::iterator iter = s.begin(); iter < s.end() - 1; iter++)
				{
					if (*iter != 'W')
					{
						ans++;
						v.push_back(iter - s.begin() + 1);
						*iter = (*iter == 'B') ? 'W' : 'B';
						*(iter + 1) = (*(iter + 1) == 'B') ? 'W' : 'B';
					}
				}
			}
			//cout << s << endl;
			cout << ans << endl;
			cout << v[0];
			for (vector<int>::iterator iter = v.begin() + 1; iter < v.end(); iter++)
			{
				cout << " " << *iter;
			}
			cout << endl;
		}
	return 0;
}
