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

map<string, bool> m;
int main()
{
	register int n, k;
	string s, t;
	while (cin >> n >> k >> s)
	{
		string::iterator iter = s.begin();
		for (; iter != s.begin() + k; iter++)
		{
			t += *iter;
		}
		m[t] = true;
		//string p=t;
		//reverse(p.begin(),p.end());
		//m[p] = true;
		for (; iter != s.end(); iter++)
		{


			t.erase(0, 1);
			t += *iter;
			//p = t;
			//reverse(p.begin(), p.end());
			m[t] = true;
			//m[p] = true;
		}
		std::cout << m.size() << endl;
	}
	return 0;
}

