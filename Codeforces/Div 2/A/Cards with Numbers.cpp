#include <iostream>
#include <vector>
#define TAM 5000
#define N 300000 
using namespace std;
int main () {
	ios::sync_with_stdio(0);
    	cin.tie(0);
	freopen("input.txt", "r", stdin);
    	freopen("output.txt", "w", stdout);
	int n, a, num[TAM + 1] = {0}, j = 0;
	vector<int> x(N), y(N);
	cin >> n;
	for (int i = 1; i <= 2 * n; i++) {
		cin >> a;
		if (num[a]) {
			x[j] = i;
			y[j] = num[a];
			j++;
			num[a] = 0;
		}
		else num[a] = i;
	}
	bool ansExists = true;
	for (int i = 1; i <= TAM; i++)
		if (num[i])
			ansExists = false;
	if (ansExists)
		for (int i = 0; i < j; i++)
			cout << x[i] << " " << y[i] << endl;
	else cout << "-1\n";
	return 0;
}
