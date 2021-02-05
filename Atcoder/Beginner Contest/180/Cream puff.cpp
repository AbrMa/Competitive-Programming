#include <iostream>
#include <set>
#include <cmath>
using namespace std;
int main () {
	set<long long> factors; 
	long long n;
	cin >> n;
	for (int i = 1; i <= sqrt(n); i++)
		if (n % i == 0) {
			factors.insert(i);
			factors.insert(n/i);
		}
	for (auto factor : factors)
		cout << factor << endl;
	return 0;
}
