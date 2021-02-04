#include <iostream>
using namespace std;
int main () {
	int n, bill, a, b;
	a = b = 0;
	bool ans = true;
	cin >> n;
	while (n--) {
		cin >> bill;
		if (bill == 25)
			a++;
		else if (bill == 50) {
			if (a) a--, b++;
			else ans = false;
		}
		else {
			if (a && b) a--, b--;
			else if (a >= 3) a -= 3;
			else ans = false;
		}
		if (ans == false) break;
	}
	if (ans) cout << "YES\n";
	else cout << "NO\n";
	return 0;
}