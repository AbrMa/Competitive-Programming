#include <iostream>
using namespace std;
int main () {
	int n, x, t, time = 0, pieces = 0;
	cin >> n >> x >> t;
	while (pieces < n) {
		time += t;
		pieces += x;	
	}
	cout << time << endl;
	return 0;
}
