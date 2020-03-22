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
struct pos
{
	pos() {};
	pos(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	int x;
	int y;
};
int main()
{
	int n, sx, sy;
	cin >> n >> sx >> sy;
	int u = 0, d = 0, l = 0, r = 0;
	int _x, _y;
	vector<pos> v;
	for (int w = 0; w < n; w++)
	{
		cin >> _x >> _y;
		v.push_back(pos(_x, _y));
	}
	for (pos t : v)
	{
		if (t.x == sx)
		{
			if (t.y > sy)
				u++;
			else
				d++;
		}
		else if (t.y == sy)
		{
			if (t.x > sx)
				r++;
			else
				l++;
		}
		else if (t.x > sx)
		{
			if (t.y > sy)
			{
				u++;
				r++;
			}
			else
			{
				d++;
				r++;
			}
		}
		else if (t.x < sx)
		{
			if (t.y > sy)
			{
				u++;
				l++;
			}
			else
			{
				d++;
				l++;
			}
		}


	}
	int _max = max(max(u, d), max(l, r));
	if (_max == u)
	{
		cout << u << endl << sx << " " << sy + 1 << endl;
	}
	else if (_max == d)
	{
		cout << d << endl << sx << " " << sy - 1 << endl;
	}
	else if (_max == l)
	{
		cout << l << endl << sx - 1 << " " << sy << endl;
	}
	else if (_max == r)
	{
		cout << r << endl << sx + 1 << " " << sy << endl;
	}
	return 0;
}