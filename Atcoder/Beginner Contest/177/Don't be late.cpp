#include <iostream>
using namespace std;
int main () {
	int d, t, s;
	cin >> d >> t >> s;
	if (s * t >= d) cout << "Yes\n";
	else cout << "No\n";
	return 0;
}
