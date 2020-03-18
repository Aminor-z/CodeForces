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
	string s;
	cin >> s;
	for (string::iterator iter = s.begin(); iter != s.end(); iter++)
	{
		*iter = tolower(*iter);
		switch (*iter)
		{
		case 'a':
		case 'o':
		case 'y':
		case 'e':
		case 'u':
		case 'i':
			*iter = ' ';
			break;
		}
	}
	stringstream ss(s);
	string t;
	while (ss >> s)
	{
		t += s;
	}
	for (string::iterator iter = t.begin(); iter != t.end(); iter++)
	{
		cout << '.' << *iter;
	}
	return 0;
}

