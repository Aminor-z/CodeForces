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

int main() {
	int x;
	cin >> x;
	while (x--) {
		map<string, int> m;
		int n;
		cin >> n;
		string t;
		vector<string> v;
		for (int i = 1; i <= n; i++) {
			cin >> t;
			m[t]++;
			v.push_back(t);
		}
		int ans = 0;
		for (string& _t : v) {
			if (m[_t] == 1) continue;
			ans++;
			m[_t]--;
			for (int j = '0'; j <= '9'; j++) {
				_t[0] = j;
				if (m[_t] == 0) {
					m[_t]++;
					break;
				}
			}
		}
		cout << ans << endl;
		for (string _t : v) {
			cout << _t << endl;
		}
	}
	return 0;
}