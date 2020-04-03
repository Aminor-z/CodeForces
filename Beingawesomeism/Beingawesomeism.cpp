﻿#pragma warning(disable:4996)
#include <algorithm>
#include <functional>
#include <map>
#include <math.h>
#include <numeric>
#include <iostream>
#include <queue>
#include <set>
#include <stack>
#include <string.h>
#include <sstream>
#include <vector>
using namespace std;
int rcount[70], ccount[70], r, c;
char v[70][70];
int solve() {
	memset(rcount, 0, sizeof(rcount));
	memset(ccount, 0, sizeof(ccount));
	int sum = 0;
	for (int i = 1; i <= r; i++) {
		for (int j = 1; j <= c; j++) {
			if (v[i][j] == 'A')
			{
				++sum;
				++ccount[j];
				++rcount[i];
			}
		}
	}
	if (sum == r * c) return 0;
	if (sum == 0) return -1;
	if (rcount[1] == c || rcount[r] == c || ccount[1] == r || ccount[c] == r) return 1;
	if (v[1][1] == 'A' || v[1][c] == 'A' || v[r][1] == 'A' || v[r][c] == 'A') return 2;
	for (int i = 2; i <= r; i++) if (rcount[i] == c) return 2;
	for (int i = 2; i <= c; i++) if (ccount[i] == r) return 2;
	if (rcount[1] || rcount[r] || ccount[1] || ccount[c]) return 3;
	return 4;
}
int main() {
	int n;
	cin >> n;
	while (n--) {
		cin >> r >> c;
		for (int i = 1; i <= r; i++) scanf("%s", v[i] + 1);
		int ans = solve();
		if (ans == -1) puts("MORTAL");
		else cout << ans << endl;;
	}
	return 0;
}
