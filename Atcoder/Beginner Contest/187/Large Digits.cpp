#include <iostream>
using namespace std;
int s (int a) {
	int sum = 0;
	while (a) {
		sum += a % 10;
		a /= 10;
	}
	return sum;
}
int main () {
	int a, b;	
	cin >> a >> b;
	cout << max(s(a),s(b)) << endl;
	return 0;
}
