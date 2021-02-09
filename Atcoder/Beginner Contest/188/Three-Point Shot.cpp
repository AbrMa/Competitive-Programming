#include <iostream>
using namespace std;
int main () {
	int x, y;
	cin >> x >> y;
	if (y < x) swap(x,y);
	if (x + 3 > y) cout << "Yes\n";
	else cout << "No\n";
	return 0;
}
