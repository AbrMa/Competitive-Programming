#include <iostream>
using namespace std;
int main() {
	int n, w, apps[3] = {0};
	bool valid = false;
	cin >> n;
	while (n--) {
		cin >> w;
		if (w == 100) apps[1]++;
		else apps[2]++;
	}
	apps[2] %= 2;
	if (apps[2] && apps[1] >= 2) {
		apps[2] = 0;
		apps[1] -= 2;
	}	
	if (apps[1] % 2 == 0 && apps[2] % 2 == 0)
		valid = true;
	if (valid) cout << "YES\n";
	else cout << "NO\n";
	return 0;
}
