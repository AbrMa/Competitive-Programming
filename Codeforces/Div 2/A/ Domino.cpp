#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n, sumx = 0, sumy = 0;
	cin >> n;
	vector<int> x(n), y(n);
	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
		sumx += x[i], sumy += y[i];
	}
	if (sumx % 2 == 0 && sumy % 2 == 0)
		cout << "0" << endl;
	else if (sumx % 2 != sumy % 2) 
		cout << "-1" << endl;
	else {
		bool ansExists = false;
		for (int i = 0; i < n; i++)
			if (x[i] % 2 != y[i] % 2)
				ansExists = true;
		if (ansExists) cout << "1" << endl;
		else cout << "-1" << endl;
	}
	return 0;
}