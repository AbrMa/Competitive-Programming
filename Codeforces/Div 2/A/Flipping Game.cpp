#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n, ans = 0;
	cin >> n;
	vector <int> num(n);
	for (int i = 0; i < n; i++) 
		cin >> num[i];
	for (int i = 0; i < n; i++) 
		for (int j = i; j < n; j++) {
			vector <int> copy = num;
			for (int k = i; k <= j; k++) {
				if (copy[k]) copy[k] = 0;
				else copy[k] = 1;
			}
			int ones = 0;
			for (int k = 0; k < n; k++)
				if (copy[k]) ones++;
			ans = max (ans, ones);
		}
	cout << ans << endl;
	return 0;
}