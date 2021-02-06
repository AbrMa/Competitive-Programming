#include <iostream>
using namespace std;
int main () {
	int sum = 0;
	string n;
	cin >> n;
	for (char c : n)
		sum += c - '0';
	if (sum % 9 == 0) cout << "Yes\n";
	else cout << "No\n";
	return 0;
}

