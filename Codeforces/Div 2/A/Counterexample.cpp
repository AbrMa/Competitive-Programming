#include <iostream>
using namespace std;
int main()
{
	long long int l,r;
	cin >> l >> r;
	if (r - l < 2)
		cout << "-1" << endl;
	else if (r - l < 3 && l % 2 == 1)
		cout << "-1" << endl;
	else
	{
		if (l % 2 == 1)
			l++;
		cout << l << " " << (l+1) << " " << (l+2) << endl;
	}
	return 0;
}
