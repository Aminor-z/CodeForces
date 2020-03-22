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
	int n;
	cin >> n;
	for (int w = 0; w < n; w++)
	{
		set<int> _set;
		int num;
		cin >> num;
		for (register int i = 1; i * i <= num; i++)
		{
			_set.insert(i);
			_set.insert((num / i));

		}
		cout << _set.size() + 1 << endl << 0;
		for (set<int>::iterator iter = _set.begin(); iter != _set.end(); iter++)
		{
			cout << " " << *iter;
		}
		cout << endl;
	}
	return 0;
}