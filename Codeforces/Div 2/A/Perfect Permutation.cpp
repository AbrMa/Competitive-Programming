#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if (n % 2 == 1)
		cout << "-1" << endl;
	else
		for (int i = 1; i <= n; i++)
		{
			if (i % 2 == 1)
				cout << (i + 1);
			else
				cout << (i - 1);
			if (i < n)
				cout << " ";
			else
				cout << endl;
		}
	return 0;
}
