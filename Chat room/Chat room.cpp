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

	string s;
	cin >> s;
	string hello = "hello";
	register int t = 0;
	for (register int i = 0; i < s.length() && t < hello.length(); i++)
	{
		if (s[i] == hello[t])
		{
			t++;
		}
	}
	(t == hello.length()) ? puts("YES\n") : puts("NO\n");

	return 0;
}

