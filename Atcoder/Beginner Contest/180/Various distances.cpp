#include <iostream>
#include <cmath>
using namespace std;
int main () {
	long long n, x, m = 0, c = -1000000;
	long double e = 0;
	cin >> n;
	while (n--) {
		cin >> x;	
		x = abs(x);
		m += x;
		c = max(c, x);
		e += x * x;
	}
	printf("%lld\n%.9Lf\n%lld\n", m, sqrt(e), c);
	return 0;
}
