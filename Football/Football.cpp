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
	search_n(s.begin(), s.end(), 7, '1') != s.end() ||
		search_n(s.begin(), s.end(), 7, '0') != s.end() ?
		puts("YES\n") : puts("NO\n");

	return 0;
}

