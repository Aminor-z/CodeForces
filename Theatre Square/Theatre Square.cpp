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
	long long m, n, a;
	while (cin >> m >> n >> a)
	{
		cout << (m/a+(long long)(m%a!=0)) * (n / a + (long long)(n % a != 0)) << endl;
	}
	return 0;
}

