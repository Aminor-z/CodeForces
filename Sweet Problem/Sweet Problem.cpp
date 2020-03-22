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
	for (int w = 0; w < n; w++)
	{
		vector<int> v(3);
		cin >> v[0] >> v[1] >> v[2];
		int ans = 0;
		sort(v.begin(), v.end());
		if (v[2] >= v[1] + v[0])
			cout << v[0] + v[1] << endl;
		else
			cout << (v[0] + v[1] + v[2]) / 2 << endl;
	}




	return 0;
}
