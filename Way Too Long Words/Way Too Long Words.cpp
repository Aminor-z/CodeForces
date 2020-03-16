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
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		if (s.length() > 10)
		{
			cout << s[0] << s.length() - 2 << s[s.length() - 1] << endl;
		}
		else
			cout << s << endl;
	}
	return 0;
}

