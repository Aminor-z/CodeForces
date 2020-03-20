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
pair<int, int> pos;
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	string s;
	while (cin >> s) {
		if (s.find("BAAB") != s.npos) {
			puts("YES\n");
			continue;
		}
		vector<pair<int, int>> ab, ba;
		for (register int pos = 0; ; pos++)
		{
			pos = s.find("AB", pos);
			if (pos != s.npos)
				ab.push_back(pair<int, int>(pos,pos+1));
			else break;
		}
		for (register int pos = 0; ; pos++)
		{
			pos = s.find("BA", pos);
			if (pos != s.npos)
				ba.push_back(pair<int, int>(pos, pos + 1));
			else break;
		}
		for(const pair<int, int> &_ab:ab)
			for (const pair<int, int>& _ba : ba)
			{
				if (_ab.first != _ba.second&&_ab.second!=_ba.first)\
				{
					puts("YES\n");
					return 0;
				}
			}
		puts("NO\n");
	}
	return 0;
}

