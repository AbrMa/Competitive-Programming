#include <iostream>
#include <math.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int ans = 0, n;
	cin >> n;
	for (int a = 1; a < n; a++)
		for (int b = a + 1; b < n; b++) {
			double hip = a * a + b * b; 
			hip = sqrt(hip);
			double fhip = floor(hip);
			//cout << hip << " " << fhip << " " << (hip==fhip)  << endl;
			if (hip == fhip && hip <= n) ans++;
		}
	cout << ans << endl;
	return 0;
}

/* pypy3

import math
n = int(input())
ans = 0
for a in range (1, 10001):
	for b in range (a + 1, 10001):
		c = a * a + b * b
		c = math.sqrt(c)
		if (c == math.floor(c) and c <= n):
			ans += 1
print(ans)

*/