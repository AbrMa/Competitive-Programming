#include <iostream>
#include <vector>
using namespace std;
int main () {
	int n, sum = 0;
	cin >> n;
	vector<int> x(n,0), y(n,0);
	for (int i = 0; i < n; i++)
		cin >> x[i] >> y[i];
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++) {
			double m = double(y[i] - y[j]) / (x[i] - x[j]);
			if (-1 <= m && m <= 1)
				sum++;
		}
	cout << sum << endl;
	return 0;
}
