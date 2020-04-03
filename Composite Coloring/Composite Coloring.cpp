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
vector<int> z;
inline bool isPrime(const int& n)
{
	float n_sqrt;
	if (n % 6 != 1 && n % 6 != 5) return false;
	n_sqrt = floor(sqrt((float)n));
	for (int i = 5; i <= n_sqrt; i += 6)
	{
		if ((n % i) == 0 || (n % (i + 2)) == 0) return false;
	}
	return true;
}
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	z.push_back(1);
	z.push_back(2);
	z.push_back(3);
	for (register int i = 5; i < 35; i += 2)
	{
		if (isPrime(i))
			z.push_back(i);
	}
	int n;
	cin >> n;
	while (n--)
	{
		int _s;
		cin >> _s;
		vector<int> v(_s);
		for (register int i = 0; i < _s; i++)
		{
			cin >> v[i];

		}
		vector<int> out(_s);
		int t = 1;
		int flag[13];
		memset(flag, 0, sizeof(flag));
		for (register int i = 0; i < _s; i++)
		{
			for (register int j = 1; j < z.size(); j++)
			{
				if (v[i] % z[j] == 0)
				{
					if (flag[j] > 0)
						out[i] = flag[j];
					else
					{
						out[i] = t;
						flag[j] = t;
						++t;
					}
					break;
				}
			}
		}
		int count = 0;
		for (int _b : flag)
		{
			if (_b > 0)++count;
		}
		cout << count << endl;
		for (vector<int>::iterator iter = out.begin(); iter != out.end(); iter++)
		{
			if (iter == out.begin())
				cout << *iter;
			else
				cout << " " << *iter;
		}
		cout << "\n";
	}

	return 0;
}

